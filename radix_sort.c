// Escribe aquí la implementación del ejercicio de Radix Sort.
#include <stdlib.h>
#include <stdio.h>

// Prototipo de funciones
void countingSortForRadix(int arr[], int n, int digitos);
void radixSort(int arr[], int n);
void imprimirArreglo(int arr[], int n);
int getMax(int arr[], int n);

int main() {
    int* arr;
    int n;

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    // Verificar que el tamaño del arreglo sea mayor que 0
    if (n <= 0) {
        printf("El tamaño del arreglo debe ser mayor que 0.\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("No se pudo crear el arreglo\n");
        exit(1);
    }

    printf("Ingresa los %d elementos: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Arreglo original: \n");
    imprimirArreglo(arr, n);

    radixSort(arr, n);

    printf("Arreglo final ordenado: \n");
    imprimirArreglo(arr, n);

    free(arr);

    return 0;
}

int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSortForRadix(int arr[], int n, int digitos) {
    int contador[10] = {0};

    int* S = (int*)malloc(n * sizeof(int));
    if (S == NULL) {
        printf("No se pudo crear el arreglo\n");
        exit(1);
    }
    // Cuenta cuántas veces se repiten los dígitos
    for (int i = 0; i < n; i++) {
        contador[(arr[i] / digitos) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        contador[i] += contador[i - 1];
    }
    // Coloca los elementos en el arreglo auxiliar (S)
    for (int i = n - 1; i >= 0; i--) {
        S[contador[(arr[i] / digitos) % 10] - 1] = arr[i];
        
        contador[(arr[i] / digitos) % 10]--;
    }
    // Copia el arreglo ordenado de vuelta en arr
    for (int i = 0; i < n; i++) {
        arr[i] = S[i];
    }

    free(S);
}

void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    // Usa Counting Sort para ordenar por cada dígito
    for (int digitos = 1; max / digitos > 0; digitos *= 10) {
        countingSortForRadix(arr, n, digitos);
    }
}

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

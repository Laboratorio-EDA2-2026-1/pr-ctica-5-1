// Escribe aquí la implementación de los ejercicios de Counting Sort.
#include <stdlib.h>
#include <stdio.h>

//Prototipo de funciones
void countingSort(int arr[], int n);
int getMax(int arr[], int n);
void imprimirArreglo(int arr[], int n);

int main() {
    int* arr;
    int n;

    printf("Ingresa el tamaño del arreglo");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("No se pudo crear el arreflo");
        exit(1);
    }

    printf("Ingresa los %d elementos: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Arreglo original: \n");
    imprimirArreglo(arr, n);

    countingSort(arr, n);

    printf("Arreglo final ordendo: \n");
    imprimirArreglo(arr, n);

    free(arr);

    return 0;
}


int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n) {
    int max = getMax(arr, n);

    int* B = (int*)malloc(n * sizeof(int));
    if (B == NULL) {
        printf("No se pudo crear el arreflo");
        exit(1);
    }

    int* C = (int*)calloc(max + 1, sizeof(int));
    if (C == NULL) {
        printf("No se pudo crear el arreflo");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        C[arr[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        C[i] += C[i - 1];
    }
    for (int i = n - 1; i>= 0; i--) {
        B[C[arr[i]] - 1] = arr[i];
        C[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = B[i];
    }

    free(B);
    free(C);
}

void imprimirArreglo(int arr[], int n) {
    for (int i =0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

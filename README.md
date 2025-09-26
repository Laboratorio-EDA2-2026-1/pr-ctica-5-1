[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/L-XCMWWR)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=20735461&assignment_repo_type=AssignmentRepo)
# Práctica 5
En esta práctica, revisaremos los algoritmos de ordenamiento que no se basan en comparaciones y, bajo ciertas condiciones, corren en tiempo lineal: Counting Sort y Radix Sort. 

Adicionalmente, revisaremos los algoritmos de búsqueda lineal y binaria. 
Se adjuntan los archivos sobre los que deben de escribir sus implementaciones para los ejercicios. Recuerden comentar su código y agregar ejemplos de entrada y salida.

# Counting Sort
## Ejercicio 1

Dada una cadena `s` compuesta por letras minúsculas del alfabeto inglés, ordena todas sus letras en orden lexicográfico utilizando Counting Sort.

Ejemplos:

Entrada: `s = "edsab"`
Salida: `abdes`
Explicación: En orden lexicográfico, `s` será `abdes`.

Entrada: `s = "geeksforgeeks"`
Salida: `eeeefggkkorss`
Explicación: En orden lexicográfico, `s` será `eeeefggkkorss`.

## Ejercicio 2

Supongamos que un arreglo `A` consta de n elementos, cada uno de los cuales es `rojo`, `blanco` o `azul`.
Queremos ordenar los elementos de manera que todos los rojos queden antes que los blancos, y todos los blancos antes que los azules.

La única operación permitida sobre las llaves es:

- `Examine(A, i)` – devuelve el color del `i`-ésimo elemento de `A`.

- `Swap(A, i, j)` – intercambia el `i`-ésimo elemento de `A` con el `j`-ésimo elemento.

Encuentra un algoritmo correcto y eficiente para la ordenación rojo-blanco-azul.

# Radix Sort

## Ejercicio 1
Implementa el algoritmo Radix Sort para ordenar listas de enteros no negativos. 

# Búsqueda lineal y binaria

## Ejercicio 1
Implementa el algoritmo de búsqueda lineal simple.

## Ejercicio 2
Implementa el algoritmo de búsqueda lineal "mejorada".

## Ejercicio 3 
Implementa el algoritmo de búsqueda lineal recursiva.

## Ejercicio 4
Implementa el algoritmo de búsqueda lineal con centinela.

# Búsqueda binaria
## Ejercicio 1
Implementa el algoritmo de búsqueda binaria (recuerda que es un algoritmo recursivo).

## Ejercicio 2 (Código binario de los números reales)
Escribe un programa en C que reciba como entrada un número real $x$ tal que $0\leq x < 1$. El programa debe simular el proceso de búsqueda binaria en el intervalo $[0,1)$ para aproximar el valor de $x$.

En cada paso, se calcula el punto medio del intervalo actual.

Si $x$ está a la izquierda del punto medio, se imprime un 0 y el intervalo se actualiza a la mitad izquierda.

Si $x$ está a la derecha del punto medio, se imprime un 1 y el intervalo se actualiza a la mitad derecha.

El proceso se repite hasta un número fijo de pasos $k$.

De esta forma, la salida es una secuencia de 0’s y 1’s que representa el código binario de $x$ en función de los pasos de la búsqueda binaria.

Ejemplo

Entrada:
`x = 0.625`
`pasos = 4`

Ejecución:

1. `Intervalo = [0,1)`, `medio = 0.5`. Entonces $0.625 > 0.5$. Luego, imprime `1`.

2. `Intervalo = [0.5,1)`, `medio = 0.75`. Entonces $0.625 < 0.75$. Luego, imprime `0`.

3. `Intervalo = [0.5,0.75)`, `medio = 0.625`. Entonces $0.625 = medio$. Luego, imprime `1`.

Salida esperada (primeros 3 pasos): `101`

En caso de que $k>3$, el resto de los dígitos son iguales a 0. Es decir si $k=10$, con esa misma entrada, la salida debe de ser `1010000000`.

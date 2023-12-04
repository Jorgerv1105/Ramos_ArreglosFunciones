#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para ingresar dimensiones de la matriz
void ingresarDimensiones(int filas, int columnas) {
    printf("Ingrese el valor para filas: ");
    scanf("%d", filas);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", columnas);
}
// Función para generar y mostrar una matriz aleatoria
void generarYMostrarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    printf("La matriz es: \n");
    for (int i = 0; i < filas; i++) {
        printf("\n");
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;
            printf("%d\t", matriz[i][j]);
        }
    }
}
// Función para sumar dos matrices
void sumarMatrices(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int resultado[filas][columnas]) {
    printf("\n\nEl resultado de la suma de las matrices es : \n ");
    for (int i = 0; i < filas; i++) {
        printf("\n");
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", resultado[i][j]);
        }
    }
}
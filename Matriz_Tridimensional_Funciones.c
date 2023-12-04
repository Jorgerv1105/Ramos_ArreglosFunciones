#include <stdio.h>

// Función para ingresar dimensiones de la matriz tridimensional
void ingresarDimensiones(int x, int n, int m)
{
    printf("Coloque el numero de matrices: \n");
    scanf("%d", x);
    printf("Coloque el numero de filas: \n");
    scanf("%d", n);
    printf("Coloque el numero de columnas:\n");
    scanf("%d", m);
}
// Función para inicializar y mostrar una matriz
void inicializarYMostrarMatriz(int x, int n, int m, int matrix[n][m], int valorInicial)
{
    printf("\n\nMatriz numero %d\n", x);
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = valorInicial;
            printf("%d \t", matrix[i][j]);
        }
    }
}
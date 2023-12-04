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
int main()
{
    int x, n, m;

    // Ingresar dimensiones de las matrices tridimensionales
    ingresarDimensiones(&x, &n, &m);

    // Declarar y mostrar las matrices tridimensionales
    for (int k = 0; k < x - 1; k++)
    {
        int matrix[n][m];
        inicializarYMostrarMatriz(k + 1, n, m, matrix, 0);
    }
    // Última matriz inicializada en unos
    int lastMatrix[n][m];
    inicializarYMostrarMatriz(x, n, m, lastMatrix, 1);

    return 0;
}

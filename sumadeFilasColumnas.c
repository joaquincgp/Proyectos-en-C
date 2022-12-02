#include <stdio.h>

int m, n;
int main()
{
    printf("Ingrese el numero de filas: \n");
    scanf("%i", &m);
    printf("Ingrese el numero de columnas: \n");
    scanf("%i", &n);
    
    int matriz[m][n];
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Ingrese el elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
   
    int sumF[m];
    int sumC[n];

    //Vector columnas
    for (int u = 0; u < n ; u++) {
        for (int w = 0; w < m; w++){
            sumC[u] += matriz[w][u];
        }
        printf("Suma de la columna %i: %i \n", u, sumC[u]);
    }
    
    printf("\n");
    
    //Vector filas
     for (int w = 0; w < m ; w++) {
        for (int u = 0; u < n; u++){
            sumF[w] += matriz[w][u];
        }
        printf("Suma de la fila %i: %i \n", w, sumF[w]);
    }
    

    return 0;
}

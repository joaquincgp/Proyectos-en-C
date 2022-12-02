#include <stdio.h>

int m, n, u, w;
int main()
{
    printf("Ingrese el numero de filas: \n");
    scanf("%i", &m);
    printf("Ingrese el numero de columnas: \n");
    scanf("%i", &n);
    
    int matriz[m][n];
    
    int i, j, u, w;
    for ( i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Ingrese el elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("\n");
    printf("Esta es su matriz: \n");
    
    //Imprimir matriz
    for (w = 0; w < m; w++) {
        for (u = 0; u < n; u++) {
            printf("%i \t", matriz[w][u]);
        }
         printf("\n");
    }
    
    printf("\n");
    
   
    int sumF[m];
    int sumC[n];

    //Vector columnas
     for (u = 0; u < n ; u++) {
     	sumC[u] = 0;
        for (w = 0; w < m; w++){
            sumC[u] += matriz[w][u];
        }
        printf("Suma de la columna %i: %i \n", u, sumC[u]);
    }
    
    printf("\n");
    
    //Vector filas
     for (w = 0; w < m ; w++) {
     	sumF[w] = 0;
        for (u = 0; u < n; u++){
            sumF[w] += matriz[w][u];
        }
        printf("Suma de la fila %i: %i \n", w, sumF[w]);
    }
    

    return 0;
}

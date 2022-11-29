#include <stdio.h>
#include <stdlib.h>

int i,j,k,u, v,w;
int a11, a12, a13, b21, b22, b23, b31, b32, b33;
int det;
    

    
int m_d[3][3] = {{3,4,5}};


int main(int argc, char *argv[]){
    //Determinante
    printf ("Calcular la determinante de una matriz 3x3! \n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf ("Ingrese el elemento [%d][%d]:", i, j);
            scanf("%d", &m_d[i][j]);
        }
    }
    printf("\n");
    
    //Imprimir matriz
    for (int k = 0; k < 3; k++) {
        for (int u = 0; u < 3; u++) {
            printf("%i \t", m_d[k][u]);
        }
         printf("\n");
    }
    printf("Esa es su matriz \n");
    printf("------------------------ \n");
    
    det = ((m_d[0][0]*m_d[1][1]*m_d[2][2])+(m_d[0][1]*m_d[1][2]*m_d[2][0])+(m_d[0][2]*m_d[1][0]*m_d[2][1])) - ((m_d[0][2]*m_d[1][1]*m_d[2][0])+(m_d[0][1]*m_d[1][0]*m_d[2][2])+(m_d[0][0]*m_d[1][2]*m_d[2][1])); 
    
    printf("El determinante es: %i", det);
	return 0;
	
}

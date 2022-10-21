#include <stdio.h>
#include <stdlib.h>

/*Determinar el numero mayor y el menor entre 6 distintos

#include <stdio.h> 
#include <conio.h> 
  
 int n1; 
 int n2; 
 int n3; 
 int n4; 
 int n5; 
 int n6; 
  
  
 int main() 
 { 
     printf("Primer numero (solo enteros): \n"); 
     scanf("%d", &n1); 
     printf("Segundo numero (solo enteros): \n"); 
     scanf("%d", &n2); 
      printf("Tercer numero (solo enteros): \n"); 
     scanf("%d", &n3); 
     printf("Cuarto numero (solo enteros): \n"); 
     scanf("%d", &n4); 
      printf("Quinto numero (solo enteros): \n"); 
     scanf("%d", &n5); 
     printf("Sexto numero (solo enteros): \n"); 
     scanf("%d", &n6); 
      
     if ((n1>=n2) && (n1>=n3) && (n1>=n4) && (n1>=n5) && (n1>=n6)){ 
         printf("%d es el mayor  \n", n1); 
     }else if ((n1<=n2) && (n2>=n3) && (n2>=n4) && (n2>=n5) && (n2>=n6)){ 
         printf("%d es el mayor \n", n2); 
     }else if ((n1<=n3) && (n2<=n3) && (n3>=n4) && (n3>=n5) && (n3>=n6)){ 
         printf("%d es el mayor \n", n3); 
     }else if ((n1<=n4) && (n2<=n4) && (n3<=n4) && (n4>=n5) && (n4>=n6)){ 
         printf("%d es el mayor \n", n4); 
     }else if ((n1<=n5) && (n2<=n5) && (n3<=n5) && (n4<=n5) && (n5>=n6)){ 
         printf("%d es el mayor \n", n5); 
     }else if ((n1<=n6) && (n2<=n6) && (n3<=n6) && (n4<=n6) && (n5<=n6)){ 
         printf("%d es el mayor \n", n6); 
     } 
      
      if ((n1<=n2) && (n1<=n3) && (n1<=n4) && (n1<=n5) && (n1<=n6)){ 
         printf("%d es el menor \n", n1); 
     }else if ((n1>=n2) && (n2<=n3) && (n2<=n4) && (n2<=n5) && (n2<=n6)){ 
         printf("%d es el menor \n", n2); 
     }else if ((n1>=n3) && (n2>=n3) && (n3<=n4) && (n3<=n5) && (n3<=n6)){ 
         printf("%d es el menor \n", n3); 
     }else if ((n1>=n4) && (n2>=n4) && (n3>=n4) && (n4<=n5) && (n4<=n6)){ 
         printf("%d es el menor \n", n4); 
     }else if ((n1>=n5) && (n2>=n5) && (n3>=n5) && (n4>=n5) && (n5<=n6)){ 
         printf("%d es el menor \n", n5); 
     }else if ((n1>=n6) && (n2>=n6) && (n3>=n6) && (n4>=n6) && (n5>=n6)){ 
         printf("%d es el menor \n", n6); 
     } 
     
     return 0; 
 }

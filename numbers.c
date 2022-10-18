#include <stdio.h>
#include <stdlib.h>

/*Determinar el numero mayor y el numero menor de 6 numeros ingresados por teclado*/

int num1;
int num2;
int num3;
int num4;
int num5;
int num6;

int main(int argc, char *argv[]) {
	printf("Ingrese el numero 1: ");
	scanf("%i", &num1);
	printf("Ingrese el numero 2: ");
	scanf("%i", &num2);
	printf("Ingrese el numero 3: ");
	scanf("%i", &num3);
	printf("Ingrese el numero 4: ");
	scanf("%i", &num4);
	printf("Ingrese el numero 5: ");
	scanf("%i", &num5);
	printf("Ingrese el numero 6: ");
	scanf("%i", &num6);
	
	if((num1>num2) && (num1>num3) && (num1>num4) && (num1>num5) && (num1>num6)){
		printf("El numero 1 (%d) es el mayor", num1);
	}
	
	if((num2>num1) && (num2 > num3) && (num2>num4) && (num2>num5) && (num2>num6)){
		printf("El numero 2 (%d) es el mayor", num2);
	}
	if((num3>num1) && (num3 > num2) && (num3>num4) && (num3>num5) && (num3>num6)){
		printf("El numero 3 (%d) es el mayor", num3);
	}
	if((num4>num1) && (num4 > num2) && (num4>num3) && (num4>num5) && (num4>num6)){
		printf("El numero 4 (%d) es el mayor", num4);
	}
	if((num5>num1) && (num5 > num2) && (num5>num3) && (num5>num4) && (num4>num6)){
		printf("El numero 5 (%d) es el mayor", num5);
	}
	if((num6>num1) && (num6 > num2) && (num6>num3) && (num6>num5) && (num6>num4)){
		printf("El numero 6 (%d) es el mayor", num6);
	}
	
	
	return 0;
}
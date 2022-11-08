#include <stdio.h>
#include <stdlib.h>

/* Conocer si un numero de 6 cifras es un palindormo

Calcular el precio de parqueadero ingresando la hora de ingreso y de salida. El valor por hora es 1,2. Si se tiene tarjeta de afiliado tiene descuento de 35%*/

int contador;
int palindromo;
int countDigits(int palindromo);

int dig1;
int dig2;
int dig3;
int dig4;
int dig5;
int dig6;

int main(int argc, char *argv[]) {
	
	printf("Ingrese un numero de 6 digitos: ");
	scanf("%i", &palindromo);
	countDigits(palindromo);
	if(contador==6){
		printf("El numero es de 6 digitos \n");
		dig1 = palindromo / 100000;
		dig2 = (palindromo % 100000)/10000;
		dig3 = (palindromo % 10000)/1000;
		dig4 = (palindromo % 1000)/100;
		dig5 = (palindromo % 100)/10;
		dig6 = (palindromo % 10);
		
		printf("Digito 1: %i \n", dig1);
		printf("Digito 2: %i \n", dig2);
		printf("Digito 3: %i \n", dig3);
		printf("Digito 4: %i \n", dig4);
		printf("Digito 5: %i \n", dig5);
		printf("Digito 6: %i \n", dig6);
		
		if((dig1 == dig6)&&(dig2 == dig5)&&(dig3==dig4)){
			printf("El numero %i es un palindromo", palindromo);
		}
			else{
				printf("El numero %i no es un palindromo", palindromo);
			}
	}
	else{
		printf("El numero no es de 6 digitos, intente de nuevo");
	}
	
	return 0;
}

int countDigits(int palindromo){
	while(palindromo>0){
		palindromo = palindromo / 10;
		contador++;
	}
	return contador;
}

#include <stdio.h>
#include <stdlib.h>


/*Calcular el precio de parqueadero ingresando la hora de ingreso y de salida. El valor por hora es 1,2. Si se tiene tarjeta de afiliado tiene descuento de 35%*/

float hEntrada;
float hSalida;
float horasParqueo;
float tarifa;

int main(int argc, char *argv[]) {
	printf("Bienvenido al parqueadero: \n");
	printf("Ingrese la hora de entrada: \n");
	scanf("%f", &hEntrada);
	printf("Ingrese la hora de salida: \n");
	scanf("%f", &hSalida);
	if((hEntrada>=0)&&(hEntrada<=24)&&(hSalida>=0)&&(hSalida<=24)){
		printf("Su hora de ingreso: %f horas \n", hEntrada);
		printf("Su hora de salida: %f horas \n", hSalida);
		horasParqueo = hSalida - hEntrada;
		tarifa = ceil(horasParqueo) * 1.2;
		printf("El valor total de parqueo es de %f dolares \n", tarifa);
		printf("Ha estado parqueado %f horas \n", horasParqueo);
		
	}
	
	return 0;
}



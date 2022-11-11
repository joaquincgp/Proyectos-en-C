#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Calcular el precio de parqueadero ingresando la hora de ingreso y de salida. El valor por hora es 1,2. Si se tiene tarjeta de afiliado tiene descuento de 35%*/

int hEntrada;
int hSalida;
int mEntrada;
int mSalida;
int horasParqueo;
int minutosParqueo;
float tarifa;
int hExtra;
int horasAdicionales;
int residuo;

int main(int argc, char *argv[]) {
	printf("Bienvenido al parqueadero: \n");
	printf("Ingrese la hora de entrada: \n");
	scanf("%i:%i", &hEntrada, &mEntrada);
	printf("Ingrese la hora de salida: \n");
	scanf("%i:%i", &hSalida, &mSalida);
	
	if((hEntrada>=0)&&(hEntrada<=24)&&(hSalida>=0)&&(hSalida<=24)){
		printf("Su hora de ingreso: %i:%i horas \n", hEntrada, mEntrada);
		printf("Su hora de salida: %i:%i horas \n", hSalida, mSalida);
		horasParqueo = hSalida - hEntrada;
		minutosParqueo = mSalida - mEntrada;
		
	    if(minutosParqueo<0){
	        horasAdicionales = hSalida + 60;
    	    horasParqueo = horasParqueo - 1;
    	    hExtra = horasAdicionales - hEntrada;
    	    printf("Ha estado parqueado %i:%i horas \n", horasParqueo,hExtra);
    	        if(hExtra>60){
    	        residuo = hExtra / 60;
    	        horasParqueo = horasParqueo + residuo;
	    }
	}
		
		tarifa = ceil(horasParqueo) * 1.2;
		printf("El valor total de parqueo es de %f dolares \n", tarifa);
		printf("Ha estado parqueado %i horas \n", horasParqueo);
		
	}
	
	return 0;
}

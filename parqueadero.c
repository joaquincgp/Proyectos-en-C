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
int descuentotarjeta;
float valortotal;

int main(int argc, char *argv[]) {
	printf("Bienvenido al parqueadero: \n");
	printf("Ingrese la hora de entrada: \n");
	scanf("%i:%i", &hEntrada, &mEntrada);
	printf("Ingrese la hora de salida: \n");
	scanf("%i:%i", &hSalida, &mSalida);
	
	if((hEntrada>=hSalida)&&(mEntrada>=mSalida)){
	    printf("No es posible determinar el costo debido a una falta de coherencia");
	}else{
	horasParqueo = hSalida - hEntrada;
    minutosParqueo = mSalida - mEntrada;
    
	if((hEntrada>=0)&&(hEntrada<=24)&&(hSalida>=0)&&(hSalida<=24)){
		printf("Su hora de ingreso: %i:%i horas \n", hEntrada, mEntrada);
		printf("Su hora de salida: %i:%i horas \n", hSalida, mSalida);

	    if(minutosParqueo<0){
	        horasAdicionales = mSalida + 60;
    	    horasParqueo = horasParqueo - 1;
    	    hExtra = horasAdicionales - mEntrada;
    	    printf("Ha estado parqueado %i:%i horas \n", horasParqueo,hExtra);
	    }
	    if((minutosParqueo>0)&&(minutosParqueo<9)){
		    printf("Ha estado parqueado %i:0%i horas \n", horasParqueo,minutosParqueo);
		}
	    else if(minutosParqueo>0){
            horasParqueo = hSalida - hEntrada;
		    minutosParqueo = mSalida - mEntrada;
		    printf("Ha estado parqueado %i:%i horas \n", horasParqueo,minutosParqueo);
	    }
	    else if(minutosParqueo=0){
	        horasParqueo=(horasParqueo);
	         printf("Ha estado parqueado %i:%i horas \n", horasParqueo,minutosParqueo);
	    }
	    
	}
	    horasParqueo++;
		tarifa = ceil(horasParqueo) * 1.2;
		printf("Se le cobra por la hora o fraccion, es decir: %i horas \n", horasParqueo);
		printf("El valor total de parqueo es de %f dolares \n", tarifa);
	
	printf("Si tiene tarjeta de descuento digite 1, de lo contrario 0:  \n");
	scanf("%i",&descuentotarjeta);
	
	if (descuentotarjeta ==1){
	valortotal=(tarifa*0.65);
	printf("El valor final a pagar es: %f dolares \n", valortotal);
	}else if (descuentotarjeta==2){
	    valortotal== tarifa;
	    printf("El valor final a pagar es: %f dolares \n", valortotal);
	}
	}
	return 0;
}

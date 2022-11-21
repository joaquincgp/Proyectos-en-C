#include <stdio.h>
#include <stdlib.h>

/* Implemente el juego 3 en raya. Considerar que se tendran 2 jugadores y que cada casillero esta denontado por una letra
Calcular el sueldo final de un vendedor considerando su sueldo basico y las comisiones por venta. Las comsiiones son 
en base al monto de cada venta considerando: A(100-200) comision es 10%, B entre (201-300) comision es 12% y C (>301) 15%. 
Sueldo basico y numero de ventas ingreado por teclado*/

//Variables
float sueldo;
	float ventas;
	float total;
	int caso;
	int nuevaVenta;
	float calcularComisiones(int caso);
	float monto;
	int contador;

//Proceso
int main(int argc, char *argv[]) {
	printf("Cual es el salario basico del trabajador: \n");
	scanf("%f", &sueldo);
	if(sueldo>=0){
		printf("Quiere ingresar una venta? 1 para SI y 2 para NO: \n");
		scanf("%i", &nuevaVenta);
		monto = 0;
		contador = 0;
		while(nuevaVenta==1){
			printf("Ingrese las ganancias en ventas, para calcular las comisiones: \n" );
			scanf("%f", &ventas);
			if((ventas>=100)&&(ventas<=200)){
				caso = 1;
				monto += calcularComisiones(1);	
				contador++;
			}else if((ventas>200)&&(ventas<=300)){
				caso = 2;
				monto += calcularComisiones(2);
				contador++;
			}else if(ventas>300){
				caso = 3;
				monto += calcularComisiones(3);
				contador++;
			}
			printf("Quiere ingresar otra venta?: \n");
			scanf("%i", &nuevaVenta);
	}

	total = monto + sueldo;
	printf("El total que recibe el trabajador es de %f dolares, acumulando una cantidad de %f dolares en comisiones por haber tenido un total de %i ventas \n", total, monto,contador);
	}else{
		printf("Error. Ejecute de nuevo e ingrese un salario superior a 0 dolares");
	}

	return 0;
}



float calcularComisiones(int caso){
	float comisiones;
	float acumulado;
		switch(caso){
			case 1:
				comisiones = 0.1;
				acumulado = comisiones*ventas;
				break;
			case 2:
				comisiones = 0.12;
				acumulado = comisiones*ventas;
				break;
			case 3:
				comisiones = 0.15;
				acumulado = comisiones*ventas;
				break;			
		}
		return acumulado;
	}

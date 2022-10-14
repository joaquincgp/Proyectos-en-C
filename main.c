#include <stdio.h>
#include <stdlib.h>

/* 2. Se desea calcular el salario neto semanal de un trabajador en función del número de horas trabajadas y la tasa de impuestos:
La tarifa horaria es de 40 dólares y la tasa de impuestos es 15%.
Se desea escribir el SALARIO BRUTO (salario antes de impuesto), TASAS DE IMPUESTOS, Y SALARIO NETO(salario después de impuestos).
Utilizar funciones y procedimientos para realizar los respectivos cálculos. */

float sBruto; 
float sNeto;
float horas;

float calcularSalarioBruto(float horas);


int main(int argc, char *argv[]) {
	float tasaImpuesto = 0.15;
	printf("Bienvenido a la calculadora del salario neto semanal de un trabajador! \n");
	printf("Ingrese la cantidad de horas: \n");
	scanf("%f", &horas);
	float sBruto = calcularSalarioBruto(horas);
	float sNeto = sBruto + (tasaImpuesto*sBruto);
	printf("El salario bruto es %f \n", sBruto);
	printf("El salario neto es %f \n", sNeto);
	return 0;
}

float calcularSalarioBruto(float horas){
	float tarifaHoraria = 40;
	float salarioBruto = tarifaHoraria * horas;
	return salarioBruto;
}



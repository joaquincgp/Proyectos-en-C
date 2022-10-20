#include <stdio.h>
#include <stdlib.h>

/* Se desea emitir notas de venta de una heladeria Considerar que por la compra de mas de 5 helados se aplicara un descuento del 6 %, por la compra
 de mas de 8 helados se aplicara un decunto del 8%, y de mas de 12 helados el 10%. Si el cliente posee tarjeta de compra frecuente
 se aplicara un descuento del 5% adicional a la compra, sin importar el numero de productos  */
 
 
int cantidadHelados;
int precioHelado = 1;
float total;
float totalD;
char respuesta;
float totalFinal;

int main(int argc, char *argv[]) {

	printf("Cuantos helados desea comprar, considerando que cada helado cuesta $1: \n");
	scanf("%i", &cantidadHelados);
	
	
	if((cantidadHelados > 5) && (cantidadHelados <= 8) )
	{
		total = cantidadHelados*precioHelado;
		totalD = total - 0.06*total;
		printf("El precio total con descuento de 6 por ciento es: %f dolares \n", totalD);
		totalFinal = totalD;
	}
	
	if((cantidadHelados > 8) && (cantidadHelados <= 12))
	{
		total = cantidadHelados*precioHelado;
		totalD = total - (0.08*total);
		printf("El precio total con descuento de 8 por ciento es: %f dolares \n", totalD);
		totalFinal = totalD;
	}
	if(cantidadHelados > 12 )
	{
		total = cantidadHelados*precioHelado;
		totalD = total - 0.1*total;
		printf("El precio total con descuento de 12 por ciento es: %f dolares \n", totalD);
		totalFinal = totalD;
	}
	if(cantidadHelados < 5)
	{
		total = cantidadHelados*precioHelado;
		printf("El precio total sin descuentos es: %f dolares \n", total);
		totalFinal = total;
	}
	
printf("--------------------------------------- \n");
		
	printf("Es cliente frecuente?: \n");
	scanf("%s", &respuesta);
	
	if(respuesta == 's'){
		totalFinal = totalFinal - 0.05*totalFinal;
		printf("El precio especial por ser cliente frecuente es de %f dolares", totalFinal);
	}
	
	
	return 0;
}

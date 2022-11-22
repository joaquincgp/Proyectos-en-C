#include<math.h>
#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
//Tres en raya
char a='a';
char b='b';
char c='c';
char d='d';
char e='e';
char f='f';
char g='g';
char h='h';
char i='i';
int contador=1;
int llave=1;
char aux ;
void comparar (char aux,char j);
void comparar2 (char aux1,char p);
void ganador(char a1,char b1, char c1, char d1, char e1, char f1, char g1, char h1, char i1, char signo);
char aux1;
void cortafuegos();
bool condicion;

int main ()
{
printf ("EL JUEGO DEL TRES EN RAYA\n");
printf ("\n");
printf ("a  |  b  |  c\n");	
printf ("---------------\n");
printf ("d  |  e  |  f\n");
printf ("---------------\n");
printf ("g  |  h  |  i\n");
printf ("\n");
llave=1;
while (contador<9){
	printf ("Jugador 1 (X): ");
	scanf("%s",&aux);
	//Volver a ingresar movimiento si esta ocupado
	if(aux1==aux){
		condicion = true;	
		}
		while(condicion==true){
			printf("Ingresa una posicion que no este ocupada\n");
			printf("Jugador 1, tu turno de nuevo:\n");
			scanf("%s", &aux);
				if(aux!=aux1){
					condicion = false;
				}
	}
	comparar (aux,'X');
	printf ("%c  |  %c  |  %c\n",a,b,c);	
	printf ("---------------\n");
	printf ("%c  |  %c  |  %c\n",d,e,f);
	printf ("---------------\n");
	printf ("%c  |  %c  |  %c\n",g,h,i);
	//Formato de ganador 1
	ganador(a,b,c,d,e,f,g,h,i,'X');
	
	
	printf ("\n");
	printf ("Jugador 2 (O): ");
	scanf ("%s",&aux1);
	if(aux1==aux){
		condicion = true;	
		}
		while(condicion==true){
			printf("Ingresa una posicion que no este ocupada\n");
			printf("Jugador 2, tu turno de nuevo:\n");
			scanf("%s", &aux1);
				if(aux!=aux1){
					condicion = false;
				}
	}
	comparar2 (aux1,'O');
	printf ("%c  |  %c  |  %c\n",a,b,c);	
	printf ("---------------\n");
	printf ("%c  |  %c  |  %c\n",d,e,f);
	printf ("---------------\n");
	printf ("%c  |  %c  |  %c\n",g,h,i);
	//Formato para elegir el ganador 2
	ganador(a,b,c,d,e,f,g,h,i,'O');
	contador++;
	cortafuegos();
}
if (llave==1)
{
	printf ("No hay ganadores, EMPATE");
}
return 0;
}
void comparar(char aux,char x)
{
	switch (aux)
	{
		case 'a':
			if (a=='X'||a=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				a=x;
			}
			break;
		case 'b':
			if (b=='X'||b=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				b=x;
			}
			break;
		case 'c':
			if (c=='X'||c=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				c=x;
			}
			break;
		case 'd':
			if (d=='X'||d=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				d=x;
			}
			break;
	    case 'e':
			if (e=='X'||e=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				e=x;
			}
			break;
		case 'f':
			if (f=='X'||f=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				f=x;
			}
			break;
		case 'g':
			if (g=='X'||g=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				g=x;
			}
			break;
		case 'h':
			if (h=='X'||h=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				h=x;
			}
			break;
		case 'i':
			if (i=='X'||i=='O')
			{
				printf ("\nCasilla ocupada\n");
				contador=contador-1;
			}
			else
			{
				i=x;
			}
			break;
		default:
			printf ("\nLa posicion no es valida\n");
				contador=contador-1;
	}

}


void comparar2 (char aux1,char o)
{
  switch (aux1){
	case 'a':
		if (a=='X'||a=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			a=o;
		}
		break;
	case 'b':
		if (b=='X'||b=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			b=o;
		}
		break;
	case 'c':
		if (c=='X'||c=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			c=o;
		}
		break;
	case 'd':
		if (d=='X'||d=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			d=o;
		}
		break;
	case 'e':
		if (e=='X'||e=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			e=o;
		}
		break;
	case 'f':
		if (f=='X'||f=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			f=o;
		}
		break;
	case 'g':
		if (g=='X'||g=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			g=o;
		}
		break;
	case 'h':
		if (h=='X'||h=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			h=o;
		}
		break;
	case 'i':
		if (i=='X'||i=='O')
		{
			printf ("\nCasilla ocupada\n");
			contador=contador-1;
		}
		else
		{
			i=o;
		}
		break;
	default:
		printf ("\nLa letra no es una posicion existente\n");
		contador=contador-1;
}
}
void ganador(char a1,char b1, char c1, char d1, char e1, char f1, char g1, char h1, char i1, char signo)
{
	if (a1==signo && b1==signo && c1==signo || d1==signo && e1==signo && f1==signo || g1==signo && h1==signo && i1==signo || a1==signo && e1==signo && i1==signo || g1==signo && e1==signo && c1==signo || a1==signo && d1==signo && g1==signo || b1==signo && e1==signo && h1==signo || c1==signo && f1==signo && i1==signo)
	{
		if (signo=='X')
		{
			printf ("\nJugador 1 gana\n");
			contador=9;
			llave=0;
		}
		else 
		{
			if (signo=='O')
			{
				printf ("\nJugador 2 gana\n");
				contador=9;
				llave=0;
			}
		}
	}
}
void cortafuegos()
{
	if ((a=='X'||a=='O') && (b=='X'||b=='O') && (c=='X'||c=='O') && (d=='X'||d=='O') && (e=='X'||e=='O') && (f=='X'|| f=='O') && (g=='X'||g=='O') && (h=='X'||h=='O') && (i=='X'||i=='O') )
	{
		contador=9;
		printf("\nEmpate\n");
	}
}


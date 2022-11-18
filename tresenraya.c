#include <stdio.h>
#include <stdlib.h>

char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i';
int contador=0;
int llave=1;
char aux ;
void comparar (char aux,char j);
void comparar2 (char aux1,char p);
void ganador(char a1,char b1, char c1, char d1, char e1, char f1, char g1, char h1, char i1, char signo);
char aux1;

int main ()
{
printf ("TRES EN RAYA\n");
printf ("a  |  b  |  c\n");	
printf ("---------------\n");
printf ("d  |  e  |  f\n");
printf ("---------------\n");
printf ("g  |  h  |  i\n");
llave=1;
printf("X corresponde al primer jugador y O al segundo \n");

while (contador<=9)
{

printf("Jugador 1, es tu turno: ");
scanf("%s",&aux);
comparar (aux,'X');

printf ("%c  |  %c  |  %c\n",a,b,c);	
printf ("---------------\n");
printf ("%c  |  %c  |  %c\n",d,e,f);
printf ("---------------\n");
printf ("%c  |  %c  |  %c\n",g,h,i);
//En caso de que el ganador sea el numero 1
ganador(a,b,c,d,e,f,g,h,i,'X');

printf ("\n");
printf ("Jugador 2, tu turno: \n");
scanf (" %s",&aux1);
comparar2 (aux1,'O');
printf ("%c  |  %c  |  %c\n",a,b,c);	
printf ("---------------\n");
printf ("%c  |  %c  |  %c\n",d,e,f);
printf ("---------------\n");
printf ("%c  |  %c  |  %c\n",g,h,i);


//En caso de que el ganador sea el jugador 2
ganador(a,b,c,d,e,f,g,h,i,'O');
	contador++;
}
if (llave==1)
{
	printf ("No hay ganadores, EMPATE");
}
return 0;
}





//Reemplazar las fichas en espacios para que no se vuelvan a usar
void comparar (char aux,char x)
{
	switch (aux)
	{
		case 'a':
			a=x;
			break;
		case 'b':
			b=x;
			break;
		case 'c':
			c=x;
			break;
		case 'd':
			d=x;
			break;
	    case 'e':
			e=x;
			break;
		case 'f':
			f=x;
			break;
		case 'g':
			g=x;
			break;
		case 'h':
			h=x;
			break;
		case 'i':
			i=x;
			break;
		default:
			printf ("\nLa letra que se ingreso es invalida\n");
				
	}

}


void comparar2 (char aux1,char o){
  switch (aux1){
	case 'a':
		a=o;
		break;
	case 'b':
		b=o;
		break;
	case 'c':
		c=o;
		break;
	case 'd':
		d=o;
		break;
	case 'e':
		e=o;
		break;
	case 'f':
		f=o;
		break;
	case 'g':
		g=o;
		break;
	case 'h':
		h=o;
		break;
	case 'i':
		i=o;
		break;
	default:
		printf ("\nLa letra que se ingreso es invalida\n");
	}
}


//Obtener ganador
void ganador(char a1,char b1, char c1, char d1, char e1, char f1, char g1, char h1, char i1, char signo)
{
	if (a1==signo && b1==signo && c1==signo || d1==signo && e1==signo && f1==signo || g1==signo && h1==signo && i1==signo || a1==signo && e1==signo && i1==signo || g1==signo && e1==signo && c1==signo || a1==signo && d1==signo && g1==signo || b1==signo && e1==signo && h1==signo || c1==signo && f1==signo && i1==signo)
	{
		if (signo=='X')
		{
			printf ("\nEl jugador 1 gana\n");
			contador=9;
			llave=0; //no hay empate
		}
		else 
		{
			if (signo=='O')
			{
				printf ("\n El jugador 2 gana\n");
				contador=9;
				llave=0; //no hay empate
			}
		}
	}
}

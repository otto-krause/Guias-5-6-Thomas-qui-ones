#include<stdio.h >
#include <stdlib.h>


int main()
{
char Nota;
printf("Escriba su calificación");
Nota=getchar();
switch (Nota)
{
case'f':
	puts("Insuficiente");
	break;
case 'd':
	puts("Suficiente");
	break;
case 'c':
	puts("Regular");
	break;
case 'b':
	puts("Buena");
	break;
case 'a':
	puts("Excelente");
	break;
}
	
return 0;
}


#include<stdio.h >
#include <stdlib.h>


int main()
{
int FechaN, Mes;
printf("escriba su fecha de nacimiento");
scanf("%d,&FechaN");
printf("escriba un mes");
scanf("%d,&Mes");
Mes=getchar();
switch (Mes)
{
case'1':
	if (FechaN<20)
    {
    puts("Acuario");
	}  
	else
	{
	puts("Capricornio");
	}
	break;
case '2':
	if (FechaN>19)
	{
	puts("Acuario");
	}
	else
	{
	puts("Piscis");
	}
	break;
case '3':
	if (FechaN<20)
	{
	puts("Aries");
	}
	else
	{
	puts("Piscis");
	}
	break;
case '4':
	if (FechaN<21)
	{
	puts("Aries");
	}
	else
	{
	puts("Tauro");
	}
	break;
case '5':
	if (FechaN<21)
	{
	puts("Tauro");
	}
	else
	{
	puts("Geminis");
	}
	break;
case'6':
	if (FechaN<22)
	{
	puts("Geminis");
	}
	else
	{
	puts("Cancer");
	}
	break;
case '7':
	if (FechaN<23)
	{
	puts("Cancer");
	}
	else
	{
	puts("Leo");
	}
	break;
case '8':
	if (FechaN<22)
	{
	puts("Leo");
	}
	else
	{
	puts("Virgo");
	}
	break;
case '9':
	if (FechaN<23)
	{
	puts("Virgo");
	}
	else
	{
	puts("Libra");
	}
	break;
case '10':
	if (FechaN<22)
	{
	puts("Libra");
	}
	else
	{
	puts("Escorpio");
	}
	break;
case '11':
	if (FechaN<23)
	{
	puts("Escorpio");
	}
	else
	{
	puts("Sagitario");
	}
	break;
case '12':
	if (FechaN<23)
	{
	puts("Sagitario");
	}
	else
	{
	puts("Capricornio");
	}
	break;
}

return 0;
}


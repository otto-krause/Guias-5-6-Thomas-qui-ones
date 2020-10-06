# Guias-5-6-Thomas-qui-ones
ejericicos de las guias 5 y 6

Thomas Quiñones



ejericios guia 5



1)
 #include<stdio.h >
#include <stdlib.h>


int main()
{
 int a=0;
 for(a=0;a<10;a++)
 {
	       
 printf("El contador a vale: %d\n", a);
 }
return 0;
}

2)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int I=0;
 float Num, NM, Pro,Total; 
 for(I=0;I<15;I++)
 {printf("ingrese un numero");
  scanf("%f",&Num);
  Total=Total+Num;
  if (Num>NM)
  {
	NM=Num;	 }
 }
 Pro=Total/15;
 printf("El valor promedio es %f\n", Pro);
 printf("El valor mayor %f", NM);
return 0;
}

3)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int num1=0,num2=0,I;
 printf("Ingrese 2 numeros");
 scanf("%d",&num1);
 scanf("%d",&num2);
 for(I=num1;I<=num2;I++)
 {  
 printf("%d\n",I);
 }
return 0;
}

4)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,F=1,I;
 printf("Ingrese un numero");
 scanf("%d",&Num);
 for(I=1;I<=Num;I++)
 {  
  F=F*I;
 }
 printf("El factorial es %d\n",F);
return 0;
}

5)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,Num2=0,P,I;
 printf("Ingrese base");
 scanf("%d",&Num);
 printf("Ingrese exponente");
 scanf("%d",&Num2);
 for(I=1;I<=Num2;I++)
 {  
  P=Num*Num;
 }
 printf("El total es %d\n",P);
return 0;
}

6)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 float N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,ProA,ProG;
 int I,c=0;
 for(I=1;I<=30;I++)
 {  
  printf("Ingrese las 10 notas");
  scanf("%f%f%f%f%f%f%f%f%f%f",&N1,&N2,&N3,&N4,&N5,&N6,&N7,&N8,&N9,&N10);
  ProA=(N1+N2+N3+N4+N5+N6+N7+N8+N9+N10)/10;
  printf("el promedio del alumno es %d es %f",I,ProA);
  c=c+ProA;
 }
 ProG=c/30;
 printf("El promedio de la clase es %f\n",ProG);
return 0;
}

7)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int I,I2,DV,VTotal,VM,VGen,MV;
 for(I=1;I<=20;I++)
 {
  VTotal=0;	
 for (I2=1;I2<=15;I2++)
 {  
  printf("Ingrese la venta del dia %d ",I2);
  scanf("%d",&DV);
  VTotal=VTotal+DV;
  if (VM<DV)
  {
  VM=DV;
  MV=I;
  }}
  printf("La venta total del vendedor %d es %d",I,VTotal);
  VGen=VGen+VTotal;
 }
 printf("La venta general es %d y la mejor venta es la del vendedor %d por %d",VGen, MV, VM);
return 0;
}

8)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,CantP=0,CantN=0,CantC=0,I;
 for(I=1;I<=10;I++)
 {
  printf("Ingrese un numero");
  scanf("%d",&Num);
  if (Num>0)
  {
  CantP=CantP+1;
  }
  else
  {
  	if (Num==0)
  	{
	 CantC=CantC+1;
	}
  else
  {
  	CantN=CantN+1;
  }}}
 printf("La cantidad de positivos es %d la de negativos es %d y la de ceros es %d",CantP,CantN,CantC);
return 0;
}

9)
#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Sueldo,Cant1,Cant2,I;
 for(I=1;I<=20;I++)
 {
  printf("Ingrese el sueldo");
  scanf("%d",&Sueldo);
  if (Sueldo>2000)
  {
  Cant1=Cant1+1;
  }
  else
  {
  Cant2=Cant2+1;
  }}
 printf("%d personas ganas más de 2000 y %d personas ganan menos de 2000",Cant1,Cant2);
return 0;
}







ejercicios guia 6






1)
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

2)
#include<stdio.h >
#include <stdlib.h>


int main()
{
int Mes;
printf("escriba un mes");
Mes=getchar();
switch (Mes)
{
case'1':
	puts("31 dias");
	break;
case '2':
	puts("28 dias");
	break;
case '3':
	puts("31 dias");
	break;
case '4':
	puts("30 dias");
	break;
case '5':
	puts("31 dias");
	break;
case'6':
	puts("30 dias");
	break;
case '7':
	puts("31 dias");
	break;
case '8':
	puts("31 dias");
	break;
case '9':
	puts("30 dias");
	break;
case '10':
	puts("31 dias");
	break;
case '11':
	puts("30 dias");
	break;
case '12':
	puts("31 dias");
	break;
}
	
return 0;
}

4)
#include<stdio.h >
#include <stdlib.h>


int main()
{
int Dia;
printf("escriba un numero del 1 al 7");
Dia=getchar();
switch (Dia)
{
case'1':
	puts("Lunes");
	break;
case '2':
	puts("Martes");
	break;
case '3':
	puts("Miercoles");
	break;
case '4':
	puts("Jueves");
	break;
case '5':
	puts("Viernes");
	break;
case'6':
	puts("Sabado");
	break;
case '7':
	puts("Domingo");
	break;

}
	
return 0;
}

5)
#include<stdio.h >
#include <stdlib.h>

int Mes;
printf("escriba un mes");
Mes=getchar();
switch (Mes)
{
case'1':
	puts("Enero");
	break;
case '2':
	puts("Febrero");
	break;
case '3':
	puts("Marzo");
	break;
case '4':
	puts("Abril");
	break;
case '5':
	puts("Mayo");
	break;
case'6':
	puts("Junio");
	break;
case '7':
	puts("Julio");
	break;
case '8':
	puts("Agosto");
	break;
case '9':
	puts("Septiembre");
	break;
case '10':
	puts("Octubre");
	break;
case '11':
	puts("Noviembre");
	break;
case '12':
	puts("Diciembre");
	break;
}
	
return 0;
}

6)
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





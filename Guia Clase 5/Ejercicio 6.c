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


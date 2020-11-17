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


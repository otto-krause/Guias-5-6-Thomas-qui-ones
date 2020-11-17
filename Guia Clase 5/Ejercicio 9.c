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





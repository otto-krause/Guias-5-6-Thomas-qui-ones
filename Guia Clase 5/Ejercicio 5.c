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


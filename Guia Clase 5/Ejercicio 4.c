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


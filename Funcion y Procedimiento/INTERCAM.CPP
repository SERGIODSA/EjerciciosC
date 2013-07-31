#include <conio.h>
#include <stdio.h>

void intercambio (int x, int y);

void main(){

   clrscr();

   int a=10;
   int b=5;

   printf ("a= %d ",a);
   printf ("b= %d ",b);

   intercambio (a,b);

   getche();
}

void intercambio (int x, int y){

   int aux = x;

   x = y;
   y = aux;

   printf ("a= %d ",x);
   printf ("b= %d",y);
}
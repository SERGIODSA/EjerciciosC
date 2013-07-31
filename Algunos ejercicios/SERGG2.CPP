#include <stdio.h>
#include <conio.h>

#define n 11

/* dado un vector de numeros enteros determinar los valores que estan en
las posiciones multiplo de x */

void main (){

   clrscr();

   int i,v[n],x,y;

      printf ("Llenando el vector... \n");

   for (i=0;i<n;i++){
      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
   }

   printf ("Introduzca el multiplo X: ");
   scanf ("%d",&x);
   printf ("Los valores que estan en la posicion multiplo de %d son: \n",x);

   for (i=0;i<n;i++){
      y = (i+1) % x;
      if (y == 0)
      printf ("%d \n",v[i]);
   }

   getche();
}
#include <conio.h>
#include <stdio.h>

#define n 6

/* dado un vector de numero entero indicar las posiciones del maximo
elemento */

void main (){

   clrscr();

   int i,v[n],max;

   printf ("Llenando el vector ... \n");

      for (i=0;i<n;i++){
	 printf ("[%d]: ",i+1);
	 scanf ("%d",&v[i]);
      }

   max = 0;
      for (i=0;i<n;i++){
	 if (max < v[i])
	    max = v[i];
      }

   printf ("Las posiciones del maximo elemento: \n");

      for (i=0;i<n;i++){
	 if (max == v[i])
	    printf ("%d \n",i+1);
	 }

   getche();
}
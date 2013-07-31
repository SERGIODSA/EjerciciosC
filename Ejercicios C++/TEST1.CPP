#include <conio.h>
#include <stdio.h>

#define n 8

/* dada un vector determinar el % de apariciones del mayor elemento */

void main (){

   clrscr();

   int i,por,v[n],max=-200,c=0;

   printf ("Introduzca el vector... \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
      if (v[i] > max)
	 max = v[i];
   }

   for (i=0;i<n;i++){

      if (v[i] == max)
	 c++;
   }

   por = (c*100)/n;

   printf ("El maximo numero es: %d \n",max);
   printf ("El Porcentaje de apariciones del mismo es: %d%%" ,por);

   getche();
}

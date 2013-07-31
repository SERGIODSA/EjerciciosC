#include <conio.h>
#include <stdio.h>

#define n 8

/* dado un vector de numeros enteros determinar el % de apariciones
de mayor elemento */

void main (){

   int v[n],i,max,c,por;

   por=0;
   c=0;

   clrscr();

   printf ("Introduzca el vector... \n");

   for (i=0;i<n;i++){           /* lectura del vector */
      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
   }

   max = v[0];

   for (i=0;i<n;i++){           /* buscando el maximo valor */
      if (max < v[i])
	 max = v[i];
   }

   for (i=0;i<n;i++){           /* numero de veces que se repite */
      if (max == v[i])
	 c++;
   }

   por = (c*100)/n;

   printf ("El porcentaje de apariciones del mayor elemento es: %d%%",por);

   getche ();
}
#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y mostrar en que posicion esta
los numeros con mas de 3 digitos */

void main(){

   clrscr();

   int i,v[n];

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }

   printf ("Posicion de los numeros con mas de 3 digitos: \n");

   for (i=0;i<n;i++){

      if (v[i] / 1000 != 0)

	 printf ("%d ",i+1);
   }

   getche();
}

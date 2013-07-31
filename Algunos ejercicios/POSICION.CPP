#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y mostrar la posicion de
cuales numeros terminan en 4 */

void main(){

   clrscr();

   int i,v[n];

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }

   printf ("Posicion del vector con valor = 4... \n");


   for (i=0;i<n;i++){

      if (v[i] % 10 == 4){

	 printf ("%d \n",i+1);

      }
   }

   getche();
}

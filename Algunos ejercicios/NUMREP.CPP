#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y determinar si existe al
menos un numero repetido */

void main(){

   clrscr();

   int i,v[n],b;


   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){               /* lectura */

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }

   b = v[0];

   for (i=1; i<n; i++){             /* imprimir */

     if (v[i] == b){

	printf ("Existe al menos 1 numero repetido");
	i = n;
     }
   }

   getche();
}

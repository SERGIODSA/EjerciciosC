#include <stdio.h>
#include <conio.h>

#define n 10

void main (){

   clrscr();

   printf ("Primeros 10 numeros primos a partir de 100... \n");

   int i,l,a,x,v[n];

   x = 2;
   l = 100;
   a = 0;


   for (i=0;i<n;i++){



      while (x < l){ /* proceso de division para ver si es primo */

	 a = l % x;
	 x++;


	 if (a == 0){  /* al dar division cero ya no es primo */

	    x = l;
	 }
      }

      if (a != 0){ /* si el residuo de la division nunca fue cero es primo
		   y se almacena el numero en el vector */

	 v[i] = l;
	 l++;
	 x = 2;
      }
      else{  /* de lo contrario no se cuenta este numero para el vector */

	 i--;
	 l++;
	 x = 2;
      }
   }
   for (i=0;i<n;i++){  /* y aqui se imprimen */
      printf ("%d ",v[i]);

   }
   getche();
}






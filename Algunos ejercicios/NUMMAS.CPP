#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y determinar en que posicion
esta el numero con mas digitos */

void main(){

   clrscr();

   int i,v[n],b,c,aux,p[n];

   c = 0;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){               /* lectura */

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }

   for (i=0;i<n;i++){               /* numero de digitos */

      aux = v[i];

      while (aux != 0){

	 aux = aux / 10;
	 c++;
      }

      p[i] = c;
      c = 0;
   }

   b = p[0];

   for (i=0; i<n; i++){

      if (b < p[i])

	 b = p[i];
   }

   printf ("Los numeros con mayor cantidad de digitos esta en la posicion... ");

   for (i=0;i<n;i++){

      if (b == p[i])
	 printf ("%d ",i+1);
   }
   getche();
}

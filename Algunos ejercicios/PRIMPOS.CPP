#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y determinar la posicion del
menor numero primo en el vector */

void main(){

   clrscr();

   int a,i,v[n],p,r;

   r = 0;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){               /* lectura */

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }

   p = v[0];

   for (i=0; i<n; i++){             /* procedimiento */

      for (a=2; a<v[i]; a++){

	 r = v[i] % a;

	 if (r == 0){

	    a = v[i];
	 }
      }

      if (v[i] < p){

	 p = v[i];

      }
   }

   printf ("El menor numero primo se ubica en la posicion... \n");

   for (i=0; i<n; i++){             /* imprimir */

     if (v[i]==2){

	printf ("%d ",i+1);
     }
     else{
	if (v[i] == p){
	printf ("%d ",i+1);
	}
     }
   }

   getche();
}

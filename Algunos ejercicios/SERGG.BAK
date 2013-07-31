#include <conio.h>
#include <stdio.h>

#define n 7
#define m 5

/* dado un vector de numeros enteros determinar las posiciones del
mayor numero entero multiplo de 5 */

void main (){

   int v[n],i,b[n],max,x;

   printf ("Introduzca los valores del vector: \n");

   for (i=0;i<n;i++){
      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
      }

   for (i=0;i<n;i++){
      x = v[i] % 5;

      if (x==0){
	 b[i] = v[i];
      }
      else{
	 b[i] = 0;
      }
   }

   max = b[i];

   for (i=0;i<n;i++){
      if (b[i] > max)
	 max = b[i];
   }

   printf ("La posicion(es) del maximo multiplo de 5 son... \n");

   for (i=0;i<n;i++){
      if (b[i] == max)
	 printf ("%d \n",i+1);
   }
   getche();
}
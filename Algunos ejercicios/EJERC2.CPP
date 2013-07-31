#include <conio.h>
#include <stdio.h>

#define n 6

/* dado un vector de numero entero imprimir los valores que estan en
las posiciones par */

void main (){
   clrscr();
   int i,v[n];

   printf ("Llenando el vector ... \n");
      for (i=0;i<n;i++){
	 printf ("[%d]: ",i+1);
	 scanf ("%d",&v[i]);
      }

   printf ("Los valores en las posiciones pares son: \n");
      for (i=1;i<n;i+=2){
	 printf ("%d \n",v[i]);
      }
   getche ();
}
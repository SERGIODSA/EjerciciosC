#include <conio.h>
#include <stdio.h>

#define n 6

/* dado un vector de numeros enteros determinar las posiciones de los
numeros pares */

void main (){
   clrscr();
   int i,v[n];

   printf ("Llenando el vector ... \n");
      for (i=0;i<n;i++){
	 printf ("[%d]: ",i+1);
	 scanf ("%d",&v[i]);
      }

   printf ("Los numeros pares estan en: \n");

      for (i=0;i<n;i++){
	 if ((v[i]%2)==0)
	    printf ("%d ",i+1);
	 }
   getche ();
}
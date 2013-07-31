#include <stdio.h>
#include <conio.h>

#define n 4

/* dada una matriz imprimir las filas pares */

void main (){

   clrscr();

   int i,j,m[n][n];

   for (i=0;i<n;i++){

      for (j=0;j<n;j++){
	 printf ("[%d] [%d]: ",i+1,j+1);
	 scanf ("%d",&m[i][j]);
      }

   }

   printf ("Imprimiendo filas par... \n");

   for (i=1;i<n;i=i+2){
      for (j=0;j<n;j++){
	 printf ("%d ",m[i][j]);
      }
      printf ("\n");
   }

   getche();
}
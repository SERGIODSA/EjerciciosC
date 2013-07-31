#include <conio.h>
#include <stdio.h>

# define n 4

/* dada una matriz imprimir el maximo elemento por fila */

void main (){

   clrscr();

   int i,j,ma[n][n],max;

   printf ("Introducir matriz: \n");

   for (i=0;i<n;i++){

      for (j=0;j<n;j++){

	 printf ("[%d] [%d]: ",i+1,j+1);
	 scanf ("%d",&ma[i][j]);
      }
   }

   for (i=0;i<n;i++){

      max = ma[i][0];

      for (j=0;j<n;j++){
	 if (ma[i][j] > max)
	    max = ma[i][j];
      }
      printf ("el max fila %d es: %d \n",i+1,max);
   }
   getche();
}
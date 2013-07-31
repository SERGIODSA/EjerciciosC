#include <stdio.h>
#include <conio.h>

#define n 3

/* dada una matriz mostrar la suma de cada columna */

void main (){

   clrscr();

   int i,j,m[n][n],sum;

   for (i=0;i<n;i++){

      for (j=0;j<n;j++){
	 printf ("[%d] [%d]: ",i+1,j+1);
	 scanf ("%d",&m[i][j]);
      }

   }

   for (j=0;j<n;j++){

      sum = 0;

      for (i=0;i<n;i++){
	 sum = sum + m[i][j];
      }
      printf ("La suma de la %d§ columna es: %d \n",j+1,sum);
   }

   getche();
}
#include <conio.h>
#include <stdio.h>

#define n 4
#define m 5

/* Dada una matriz de N x M determinar:
	a) mayor numero de dos digitos por fila
	b) promedio por columna */

void main (){

   clrscr();

   int i,j,ma[m][n],max;

   float prom,sum;

   printf ("Introducir matriz: \n");

   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
	 printf ("[%d][%d]: ",i+1,j+1);
	 scanf ("%d",&ma[i][j]);
      }
   }

   printf ("El mayor numero de dos digitos por fila es: \n");

   for (i=0;i<m;i++){
      max = 0;
      for (j=0;j<n;j++){
	 if ((ma[i][j] > 9) && (ma[i][j] < 100) && (ma[i][j] > max)){
	    max = ma[i][j];
	 }
      }
      printf ("Fila %d: %d \n",i+1,max);
   }

   printf ("\n");
   printf ("El promedio por columna es: \n");

   for (i=0;i<m;i++){
      sum = 0;
      for (j=0;j<n;j++){
	 sum = sum + ma[j][i];
      }
      prom = sum / n;
      printf ("Columna %d: %.2f \n",i+1,prom);
   }
   getche();
}


#include <conio.h>
#include <stdio.h>

#define n 4

/* dada una matriz de N x N determinar:
   A) mayor elemento por fila
   B) % de pares por columna */


void main (){

   clrscr();

   int i,j,ma[n][n],max,c,por;

   printf ("Introducir matriz: \n");

   for (i=0;i<n;i++){
      for (j=0;j<n;j++){

	 printf ("[%d][%d]: ",i+1,j+1);
	 scanf ("%d",&ma[i][j]);
      }
   }
   printf ("\n");
   printf ("El mayor elemento por fila es: \n");

   for (i=0;i<n;i++){

      max = ma[i][0];

      for (j=0;j<n;j++){
	 if (ma[i][j] > max)
	    max = ma[i][j];
      }
      printf ("Fila %d... %d \n",i+1,max);
   }

   printf ("\n");
   printf ("El %% de numeros pares por columna es: \n");

   for (i=0;i<n;i++){

      por = 0;
      c = 0;

      for (j=0;j<n;j++){
	 if (ma[j][i] % 2 == 0){
	    c=c++;
	 }
      }
      por = (c*100)/n;
      printf ("Columna %d... %d%% \n",i+1,por);
   }

   getche();

}

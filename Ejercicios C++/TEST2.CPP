#include <conio.h>
#include <stdio.h>

#define n 4

/* dada una matriz de N x N determinar las posiciones del mayor elemento
de cada fila */

void llenar_matriz (int v[n][n]);

void main (){

   clrscr();

   int vector[n][n],i,j,max;

   llenar_matriz (vector);

   printf ("\n");
   printf ("El mayor valor de cada fila esta ubicado en las columnas... \n");
   printf ("\n");

   for (i=0;i<n;i++){

      printf ("Fila N§%d: \n",i+1);

      max = vector[i][0];

      for (j=0;j<n;j++){
	 if (vector[i][j] > max)
	    max = vector[i][j];
      }

      for (j=0;j<n;j++){
	 if (vector[i][j]==max)
	    printf ("%d \n",j+1);
      }

      printf ("\n");
   }

   getche();
}

void llenar_matriz (int v[n][n]){

   int i,j;

   printf ("Introducir la matriz... \n");

   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
      printf ("[%d][%d]: ",i+1,j+1);
      scanf ("%d",&v[i][j]);
      }
   }
}


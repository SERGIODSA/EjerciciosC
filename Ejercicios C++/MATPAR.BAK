#include <conio.h>
#include <stdio.h>

#define n 4

/* Dada una matriz de N x N imprimir la cantidad de numeros pares por fila */


void main (){

   clrscr();

   int i,j,m[n][n],c;



   printf ("Llenando la matriz... \n");

   for (i=0;i<n;i++){

      for (j=0;j<n;j++){

	 printf ("[%d][%d]: ",i+1,j+1);

	 scanf ("%d",&m[i][j]);

      }
   }


   for (i=0;i<n;i++){

      c=0;

      for (j=0;j<n;j++){

	 if ((m[i][j] % 2 == 0))

	 c++;


      }

   printf ("Los pares de la fila %d son %d \n",i+1,c);

   }


   getche();

}
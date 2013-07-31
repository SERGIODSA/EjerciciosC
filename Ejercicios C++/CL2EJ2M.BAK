#include <stdio.h>
#include <conio.h>

#define n 4

/* dada una matriz de N x N indicar cantidad de numeros de 2 digitos por
columna */

void main (){

   clrscr();

   int i,j,m[n][n],c;

   printf ("Introduzca el vector... \n");

   for (i=0;i<n;i++){
      for (j=0;j<n;j++){

	 printf ("[%d][%d]: ",i+1,j+1);
	 scanf ("%d",&m[i][j]);
      }
   }

   printf ("\n");
   printf ("La cantidad de numeros de 2 digitos por columna es... \n");

   for (i=0;i<n;i++){

      c = 0;

      for (j=0;j<n;j++){

	 if ((m[j][i] > 9) && (m[j][i] < 100))
	    c=c++;
      }
      printf ("%d§ Columna... %d \n",i+1,c);
   }

   getche();
}


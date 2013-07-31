#include <conio.h>
#include <stdio.h>

#define n 4

/* Diagonal secundaria */


void main (){

   clrscr();

   int i,j,m[n][n];


   printf ("Llenando la matriz... \n");

   for (i=0;i<n;i++){

      for (j=0;j<n;j++){

	 printf ("[%d][%d]: ",i+1,j+1);

	 scanf ("%d",&m[i][j]);

      }
   }


   printf ("Diagonal secundaria \n");


   for (i=0;i<n;i++){

      printf ("%d ",m[i][n-i-1]);

   }

   getche();

}
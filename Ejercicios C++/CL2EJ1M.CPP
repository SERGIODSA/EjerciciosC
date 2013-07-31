#include <conio.h>
#include <stdio.h>

#define n 4

/* dada una matriz de N a N calcular el % de los numeros impares por fila */

void main (){

   clrscr();

   int i,j,c,por,m[n][n];

   c = 0;

   printf ("Introduzca el vector: \n");

   for (i=0;i<n;i++){
      for (j=0;j<n;j++){

	 printf ("[%d][%d]: ",i+1,j+1);
	 scanf ("%d",&m[i][j]);
      }
   }

   printf ("Porcentajes de numeros impares por fila... \n");
   printf ("\n");

   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
	 if (m[i][j] % 2 != 0){
	    c=c++;
	 }
      }
      por = (c*100)/n;
      c = 0;
      printf ("Fila %d... %d%% \n",i+1,por);
   }

   getche();
}
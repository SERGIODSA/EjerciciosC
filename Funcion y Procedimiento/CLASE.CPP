#include <conio.h>
#include <stdio.h>
#define n 4

void llenar (int vector [n]);
void imprimir_mult_3 (int vector [n]);

void main (){
   int v[n];
   llenar (v);
   imprimir_mult_3 (v);
   getche ();
}

void llenar (int vector [n]){

   int i;

   for (i=0;i<n;i++){
      printf ("[%d]: ",i+1);
      scanf("%d",&vector [i]);
   }
}
void imprimir_mult_3 (int vector [n]){

   int i;
      printf ("Los multiplos de 3 estan \n");

      for (i=0;i<n;i++){
	 if ((vector [i] % 3)==0)
	 printf("%d \n",i+1);
      }
}
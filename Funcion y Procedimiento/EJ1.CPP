#include <conio.h>
#include <stdio.h>

#define n 5

void llenar_vector (long int v[n]);

   long int capicua (long int c);

void imprimir (long int v[n]);

/* dado un vector de numeros enteros imprimir
las posiciones de los numeros capicuas */

void main (){

   clrscr();

   long int vector[n];

   llenar_vector (vector);

   imprimir (vector);

   getche();

}

void llenar_vector (long int v[n]){

   int i;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%ld",&v[i]);

   }
}

long int capicua (long int c){

   int i;

   long int a, x;

   for (i=0;i<n;i++){

      long int aux = c;

      x = 0; 

      while (aux != 0){

	 a = aux % 10;
	 aux = aux / 10;
	 x = (x*10) + a;
      }
   }

   return x;
}


void imprimir (long int v[n]){


   int i,cap;

   printf ("Las posiciones de los numeros capicua son... \n");

   for (i=0;i<n;i++){

      cap = capicua (v[i]);

      if (cap == v[i])

	 printf ("%d \n",i+1);
   }
}
#include <conio.h>
#include <stdio.h>

#define n 5


/* dado un vector de numeros enteros imprimir
las posiciones del mayor elemento */


void leer_vector (int v[n]);

int mayor (int v[n]);

void imprimir (int v[n], int aux);

void main (){

   clrscr();

   int vector [n],auxilio;

   leer_vector (vector);
   auxilio = mayor (vector);
   imprimir (vector,auxilio);

   getche();

}

void leer_vector (int v[n]){

   int i;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);

   }
}

int mayor (int v[n]){

      int aux = v[0];

      int i;

      for (i=0;i<n;i++){

	 if (v[i] > aux)

	 aux = v[i];
      }
      return aux;
   }

void imprimir (int v[n], int aux){

   printf ("La posicion del mayor elemento es... \n");

   int i;

   for (i=0;i<n;i++){

      if (aux == v[i])

      printf ("%d \n",i+1);
   }
}








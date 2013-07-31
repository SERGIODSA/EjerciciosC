#include <conio.h>
#include <stdio.h>

#define n 5

/* dado un vector de numeros enteros determinar las posiciones del
numero que contenga la suma de digitos mas alta */

void leer_vector (int v[n]);

   int suma (int y);

void imprimir (int v[n]);

void main (){

   clrscr();

   int vector[n],maximo;

   leer_vector (vector);

   imprimir (vector);

   getche();

}

void leer_vector (int v[n]){

   int i;

   printf ("Introducir Vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
   }

}
   int suma (int y){

      int aux = y;
      int r, s = 0;

	 while (aux != 0){
	    r = aux % 10;
	    aux = aux / 10;
	    s = s + r;
	 }
      return s;
   }

void imprimir (int v[n]){

   int i, s, max;

   max = 0;

   for (i=0;i<n;i++){

   s = suma (v[i]);

      if (s > max){
	 max = s;
      }
   }

   printf ("\n");
   printf ("las posiciones del numero que contenga \n");
   printf ("la suma de digitos mas alta es: \n");

   for (i=0;i<n;i++){

   s = suma (v[i]);

      if (max == s)

      printf ("%d \n",i+1);
   }

}
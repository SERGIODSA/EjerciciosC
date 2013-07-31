#include <conio.h>
#include <stdio.h>

#define n 5

/* dado un vector de numeros enteros imprimir
las posiciones de los numeros donde la suma
de sus digitos sea multiplo de x */

void leer_vector (int v[n]);

   int suma (int y);

void imprimir (int v[n], int x);

void main (){

   clrscr();

   int vector[n], equis;

   leer_vector (vector);

   printf ("Introducir Multiplo X: \n");
   scanf ("%d",&equis);

   imprimir (vector,equis);

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

void imprimir (int v[n], int x){

   int i, s;

   printf ("La posicion de los multiplos de %d es: \n",x);

   for (i=0;i<n;i++){

      s = suma (v[i]);

      if (s % x == 0)

      printf ("%d \n",i+1);

      s = 0;
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
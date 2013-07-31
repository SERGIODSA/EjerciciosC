#include <conio.h>
#include <stdio.h>

#define n 7
#define a 3

/* dado un vector de numeros enteros determinar las posiciones de
aquellos numeros donde la suma de sus digitos sea multiplo de 3 */

void leer_vector (int v[n]);

   int suma (int y);

void imprimir (int v[n], int x);

void main (){

   clrscr();

   int vector[n];
   int equis = a;

   leer_vector (vector);
   imprimir (vector,equis);

   getche();

}

void leer_vector (int v[n]){

   int i;

   printf ("Introducir Vector: \n");
   printf ("\n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
   }
}

void imprimir (int v[n], int x){

   int i, s;

   printf ("\n");
   printf ("La posicion de aquellos numeros cuya \n");
   printf ("suma de sus digitos sea multiplo %d es: \n",a);

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
#include <conio.h>
#include <stdio.h>

#define n 7

/* dado un vector de numeros enteros imprimir las posiciones de los valores
que sean mayor al promedio del vector */

void main (){

   int v[n],i,sum,prom;

   clrscr();

   sum=0;

   printf ("Introduzca el vector... \n");

   for (i=0;i<n;i++){               /* lectura de vector y suma */
      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
      sum = sum + v[i];
   }

   prom = sum/n;

   printf ("Las posiciones de los valores mayor al promedio son... \n");

   for (i=0;i<n;i++){               /* imprimiendo posicion */
      if (v[i] > prom)
      printf ("%d \n",i+1);
   }

   getche();
}
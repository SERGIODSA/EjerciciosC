#include <conio.h>
#include <stdio.h>

#define n 10

/* leer 10 numeros, almacenar en un vector y determinar si el promedio
de estos datos esta en el vector */

void main(){

   clrscr();

   int i,v[n],sum,prom;

   sum = 0;
   prom = 0;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){

      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
      sum = sum + v[i];

   }

   prom = sum / n;

   for (i=0;i<n;i++){

     if (prom == v[i]){

	printf ("Promedio del vector = %d \n",prom);
	printf ("El numero promedio de los datos existe en el vector");
	i = n;
     }
   }

   getche();
}

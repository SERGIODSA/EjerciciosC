#include <conio.h>
#include <stdio.h>

#define n 5

/* dado un vector de numero entero determinar las posiciones donde los
digitos extremos sean iguales */

void main (){
   clrscr();

   int i,v[n],aux,res,u;

   printf ("Introducir vector: \n");

   for (i=0;i<n;i++){
      printf ("[%d]: ",i+1);
      scanf ("%d",&v[i]);
   }
   printf ("Las posiciones de digitos extremos iguales son... \n");

   for (i=0;i<n;i++){
      u=0;
      aux=0;
      res=0;
      u = v[i] % 10;
      aux = v[i];
      while (aux !=0){
	 res = aux % 10;
	 aux = aux / 10;
      }
      if (u == res)
	 printf ("%d \n",i+1);
   }
   getche();
}
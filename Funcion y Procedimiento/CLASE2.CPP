#include <stdio.h>
#include <conio.h>

#define n 5

/* dado un vector de numeros enteros imprimir
    la suma de digitos de cada numero */

void llenar (int v[n]);
void imprimir_suma (int v[n]);
   int sumar (int x);

void main (){

   int vec[n];

   llenar(vec);
   imprimir_suma(vec);
   getche();
}

void llenar (int v[n]){    /* llenado de vector */

   int i;

   for (i=0;i<n;i++){
      printf ("[%d]: ",i+1);
      scanf("%d",&v[i]);
   }
}

void imprimir_suma (int v[n]){    /* imprime suma */

   int i,s;

   for (i=0;i<n;i++){
      s = sumar(v[i]);
      printf ("%d \n",s);
   }
}
   int sumar (int x){       /* suma de digitos */

      int aux = x;
      int r, s = 0;

	 while (aux != 0){
	    r = aux % 10;
	    aux = aux / 10;
	    s = s + r;
	 }
      return s;
   }
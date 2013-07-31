#include <stdio.h>
#include <conio.h>
void leer (FILE *datos);
int main (){
	FILE *datos;
	leer (datos);
	getche ();
}
void leer (FILE *datos){
	int num;
	  datos = fopen ("datos.dat","r");
		if (datos==NULL){
			printf ("ERROR EN ARCHIVO");
		}
		else{
			printf ("APERTURA EXITOSA");
				while (!feof(datos)){
					fscanf (datos,"%d",&num);
					printf ("NUM: %d\n",num);
			       }
		}
}

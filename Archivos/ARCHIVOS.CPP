#include <conio.h>
#include <stdio.h>

#define maxele 100

void main(){

clrscr();

int vector[maxele];
int n = 0;

FILE *datos, *resultado;       /* puntero datos y salida de la variable tipo FILE */

datos = fopen ("C:\\BC31\\BIN\\TAREA4\\romanos.txt","r");   /* abre el archivo de entrada */
resultado = fopen ("C:\\BC31\\BIN\\TAREA4\\enteros.txt","w"); /* abre archivo de salida */

if (datos == NULL)           /* verifico si el archivo abrio correctamente */
   printf("Error abriendo archivo");
else{
/* mientras no llegue al final del archivo y el arreglo tenga < a maxele */
   while ( (!feof(datos)) && (maxele>n) ){
      fscanf(datos,"%d",&vector[n]);        /* lee datos del archivo */
      fprintf(resultado,"%d ",vector[n]);   /* guarda datos en el nuevo archivo */
      n++;                     /* cuenta elementos que lee del archivo */
   }                           /* = numero de elementos del arreglo */
}

fclose(datos);

getche();

}
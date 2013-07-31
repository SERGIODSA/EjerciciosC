#include <conio.h>
#include <stdio.h>
#include <string.h>

#define n 30

struct alumnos{
   char nombres[30];
   unsigned long int cedula;
   float nota;
};


void menu(struct alumnos datos[n]);
   void leer_datos(struct alumnos datos[n], int *i);
   void eliminar_datos(struct alumnos datos[n], int *i);
   void buscar_datos(struct alumnos datos[n], int i);
   void modificar_datos(struct alumnos datos[n]);
   void mostrar_datos(struct alumnos datos[n], int i);

void main(){
   struct alumnos datos[n];
   menu(datos);
}

void menu(struct alumnos datos [n]){

   int opcion;
   int i=0;

   do{
      clrscr();
      printf("           Menu\n");
      printf("--------------------------\n");
      printf("1) Insertar alumno\n");
      printf("2) Eliminar alumno\n");
      printf("3) Consultar alumno\n");
      printf("4) Modificar alumno\n");
      printf("5) Imprimir alumno\n");
      printf("6) Salir del Sistema\n");
      printf("¨Que operacion desea realizar? ");
      scanf("%d",&opcion);

      switch (opcion){
	   case 1:
		clrscr();
		leer_datos(datos,&i);
		break;
	   case 2:
		clrscr();
		eliminar_datos(datos,&i);
		getche();
		break;
	   case 3:
		clrscr();
		buscar_datos(datos,i);
		getche();
		break;
	   case 4:
		clrscr();
		modificar_datos(datos);
		getche();
		break;
	   case 5:
		clrscr();
		mostrar_datos(datos,i);
		getche();
		break;
      }
   }while((opcion<6)&&(opcion>0));
}

void leer_datos(struct alumnos datos[n], int *i){

   char resp = 's';
   int c = *i;

   do{
      getchar();
      printf("Nombre del alumno: ");
      gets(datos[c].nombres);
      printf("Cedula de Identidad: ");
      scanf("%ld",&datos[c].cedula);
      printf("Promedio: ");
      scanf("%f",&datos[c].nota);
      printf("¨Desea seguir agregando alumnos? (s/n)");
      scanf(" %c",&resp);

      c++;

   }while ((resp=='s')||(resp=='S')&&(c<n));

   *i = c;
}

void eliminar_datos(struct alumnos datos[n],int *i){

   int c = *i;
   unsigned long int ced;

   printf("Ingrese cedula del alumno que desea eliminar: \n");
   printf("%ld",&ced);

   for (int x=0;x<(c-1);x++){
      if (ced==datos[x].cedula){
	 datos[x] = datos[(x+1)];
	 c--;
      }
      else{
      printf("No se encontro alumno\n");
      }
   }
   *i = c;
}

void buscar_datos(struct alumnos datos[n], int i){

   int opcion;
   char nom[n];

   do{
      printf("¨Como desea realizar la busqueda?\n");
      printf("\n1) Nombre\n2) Cedula\n");
      printf("Introduzca opcion: \n");
      scanf("%d",&opcion);

      if(opcion==1){
	 printf("Introduzca Nombre: ");
	 gets(nom);
	 int a = 0;
	 for(int x=0;x<i;x++){
	    int boleano = strcmp(nom,datos[x].nombres);
	    printf("                Lista de alumnos\n");
	    printf("                ----------------\n");
	    printf("    Nombre              Cedula    Promedio\n");
	    printf("-----------------------------------------------\n");
	    if (boleano==0){
	       gotoxy(5,(a+5));
	       printf("%s",datos[x].nombres);
	       gotoxy(25,(a+5));
	       printf("%ld",datos[x].cedula);
	       gotoxy(35,(a+5));
	       printf("%.3f",datos[x].nota);
	       a++;
	    }
	    if(a==0){
	       printf("    ------              ------    --------");
	    }
	 }
      } //final de opcion 1
      else if(opcion==2){

	 int a = 0;
	 unsigned long int ced;

	 printf("Introduzca Cedula: ");
	 scanf("%ld",&ced);

	 for(int x=0;x<i;x++){
	    printf("                Lista de alumnos\n");
	    printf("                ----------------\n");
	    printf("    Nombre              Cedula    Promedio\n");
	    printf("-----------------------------------------------\n");
	    if (ced==datos[x].cedula){
	       gotoxy(5,(a+5));
	       printf("%s",datos[x].nombres);
	       gotoxy(25,(a+5));
	       printf("%ld",datos[x].cedula);
	       gotoxy(35,(a+5));
	       printf("%.3f",datos[x].nota);
	       a++;
	    }
	    if(a==0){
	       printf("    ------              ------    --------");
	    }
	 }
      }//fin opcion 2
   }while((opcion>2)||(opcion<1));
}

void modificar_datos(struct alumnos datos[n]){

   unsigned long int ced;
   int a=0;

   printf("Introduzca cedula: ");
   scanf("%ld",&ced);
      for(int x=0;x<i;x++){
	 if (ced==datos[x].cedula){
	    gotoxy(5,(a+5));
	    printf("%s",datos[x].nombres);
	    gotoxy(25,(a+5));
	    printf("%ld",datos[x].cedula);
	    gotoxy(35,(a+5));
	    printf("%.3f",datos[x].nota);
	    a++;
	 }
	 if(a==0){
	    printf("No se encontro el alumno");
	 }
      }


}

void mostrar_datos(struct alumnos datos[n], int i){

   printf("                Lista de alumnos\n");
   printf("                ----------------\n");
   printf("    Nombre              Cedula    Promedio\n");
   printf("-----------------------------------------------\n");

   for (int c=0;c<i;c++){
      gotoxy(5,(c+5));
      printf("%s",datos[c].nombres);
      gotoxy(25,(c+5));
      printf("%ld",datos[c].cedula);
      gotoxy(35,(c+5));
      printf("%.3f",datos[c].nota);
   }
}







void _bugfix_float(void){   /* copiado de internet, arregla un bug  */
			    /* que hay cuando lee el valor flotante */
   float *bugfix;
   bugfix = bugfix;

}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define n 5
int b=0;
struct arreglo{
                 char valido;
                 int num;
         };
void menu(struct arreglo x[n]);
void error ();
arreglo create (struct arreglo x[n]);
arreglo erase(struct arreglo x[n]);
arreglo insert(struct arreglo x[n]);
void consulti(struct arreglo x[n]);
arreglo mod(struct arreglo x[n]);
int count (struct arreglo x[n]);
int menuaux ();
int menumod ();
int pelm();
int ppos();
void print (struct arreglo x[n]);
arreglo del (struct arreglo x[n]);
arreglo delpp(arreglo x[n],int pos);
arreglo delpe(arreglo x[n]);
arreglo delpp(arreglo x[n]);
int main (){
    arreglo x[n];
    menu(x);
}
void menu (arreglo x[n]){
     int opcion;
     while (opcion!=8){
          system ("cls");
          printf ("Presione:\n");
          printf ("1 Para Crear el Arreglo\n");
          printf ("2 Para Borrar Arreglo\n");
          printf ("3 Para Insertar Elemento\n");
          printf ("4 Para Consultar Elemento\n");
          printf ("5 Para Modificar Elemento\n");
          printf ("6 Para Eliminar Elemento\n");
          printf ("7 Para Imprimir Registro\n");
          printf ("8 Para Salir del Sistema\n");
          scanf ("%d",&opcion);
    switch (opcion){
           system ("cls");
           case 1:
                system ("cls");
                x[n] = create(x);
                system ("pause");
                break;
           case 2:
                system ("cls");
                x[n] = erase(x);
                system ("pause"); 
                break;
           case 3:
                system ("cls");
                x[n] = insert(x);
                system ("pause");
                break;
           case 4:
                system ("cls");
                consulti(x);
                system ("pause");
                break;
           case 5:
                system ("cls");
                mod(x);
                system ("pause");
                break;
           case 6:
                system ("cls");
                del(x);
                system ("pause");
                break;
           case 7:
                system ("cls");
                print(x);
                system ("pause");
                break;
           case 8:
                exit(0);
                break;
           }//switch
           }//while
}//menu
void error(){
     printf ("Error. No se ha creado el arreglo\n");
     }
arreglo create(arreglo x[n]){
        int i,band=0;
        printf ("Arreglo Creado\n");
        b=1;
        for (i=0;i<n;i++){
             x[i].valido='s';
             band=1;
             }
        return x[n];
       }
arreglo erase(arreglo x[n]){
          int i;
          if (b==0)
          error();
          else{
               b=0;
          printf ("Arreglo Borrado\n");
        for (i=0;i<n;i++)
             x[i].valido='s';
        }
             return x[n];
}
int cont(arreglo x[n]){
    int i,c=0;
    for (i=0;i<n;i++)
        if (x[i].valido=='n')
           c++; 
return c++;       
}
arreglo insert(arreglo x[n]){
        int i,band=0;
        if (b==0)
           error();
        else{
        for (i=0;i<n;i++){
            if (x[i].valido=='s'){
        printf ("Inserte valor:\n");
        scanf ("%d",&x[i].num);
              x[i+1].valido='s';
              x[i].valido='n';
              band=1;
              break;
              }
        }
        if (band==0)
        printf ("ERROR. Memoria Llena\n");
        }
        return x[n];
}

void consulti(arreglo x[n]){
     int pos,aux,e,i,band=0;
     if (b==0)
          error();
     else if (cont(x)==0)
          printf ("Error. No existen elementos\n");
     else{
     printf ("Presione:\n");
     aux=menuaux ();
     system ("cls");
     if (aux==1){
     pos=ppos();
     pos=pos-1;
         if (x[pos].valido=='s'){
            printf ("ERROR. Posicion Disponible\n");
         }else{
             system ("cls");
             printf ("%d\n",x[pos].num);
             }
     }else{
        printf ("Inserte elemento que desea consultar:\n");
        scanf ("%d",&e);
              for (i=0;i<n;i++)
                  if (x[i].num==e){
                  printf ("El elemento %d esta en la posicion %d\n",e,i+1);
                  band=1;
                  }
        if (band==0)
                  printf ("Error. No se encontro %d en el arreglo\n",e);
     }//else
     }
     }
arreglo mod (arreglo x[n]){
        int aux,pos,e,i,band;
        if (b==0)
          error();
        else if (cont(x)==0)
          printf ("Error. No existen elementos\n"); 
        else{
        e=pelm();
              for (i=0;i<n;i++)
                  if (x[i].num==e){
                  system ("cls");
                  printf ("Inserte nuevo valor:\n");
                  scanf ("%d",&x[i].num);
                  band=1;
                  }
        if (band==0)
                  printf ("ERROR. No se encontro %d en el arreglo\n",e);
        }//else
        return x[n];
        }
int menuaux (){
    int op;
     printf ("1. Para consultar por Posicion\n");
     printf ("2. Para consultar por Elemento\n");
     scanf ("%d",&op);
     return op;
     }
int menudel(){
    int op;
    do{
     printf ("1. Para Eliminar por Posicion\n");
     printf ("2. Para Eliminar por Elemento\n");
     scanf ("%d",&op);
     }while((op!=1)||(op!=2));
     return op;
}
int ppos(){
    int pos=0,band=0;
    system ("cls");
    do{
    if (band!=0){
       printf ("Posicion no valida\n");
       printf ("Inserte Posicion:\n");
       scanf ("%d",&pos);
    }else{
    system ("cls");
    printf ("Inserte Posicion:\n");
    scanf ("%d",&pos);
    band=1;
    }
    }while (pos>n);
    return pos;
}
int pelm(){
    int e;
    system ("cls");
    printf ("Inserte Elemento:\n");
    scanf ("%d",&e);
    return e;
}

arreglo delpp (arreglo x[n]){
        int i,j,cant,pos;
        cant=cont(x);
        pos=ppos();
        for (i=pos-1;i<cant-1;i++){
        x[i].num=x[i+1].num;
        }
        x[i].valido='s';
return x[n];
        }
arreglo delpe (arreglo x[n]){
        int i,cant,j,e;
        cant=cont(x);
        e=pelm();
        for (i=0;i<cant-1;i++)
        if (x[i].num==e)
        delpp(x,i);
        return x[n]; 
}
arreglo delpp(arreglo x[n],int pos){
        int i,j,cant;
        cant=cont(x);
        for (i=pos;i<cant-1;i++){
        x[i].num=x[i+1].num;
        }
        x[i].valido='s';
        return x[n];
        }
arreglo del (arreglo x[n]){
        int aux,b1=0,b2=0;
        if (b==0)
        error();
        else if (cont(x)==0)
        printf ("Error. No existen elementos\n"); 
        else{
        aux=menudel();
        if (aux==1){
        delpp(x);
        b1=1;
        }else{
        delpe(x);
        b2=1;
        }
        }
        if ((aux==1)&&(b1==0))
        printf ("Error. Posicion no valida\n");
        else if ((b2==0)&&(aux==2))
        printf ("Error. No se encontro el elemento\n");
        
        return x[n];
}
void print (arreglo x[n]){
     int i;
     if (b==0)
      error();
     else if (cont(x)==0)
          printf ("Error. No existen elementos\n"); 
     else{
     for (i=0;i<n;i++)
         if (x[i].valido=='n')
            printf ("%d\n",x[i].num);
         }
}


#include <stdio.h>
#include <stdlib.h>
# define tam 10

void inicializarArreglo(int[]);
void datosVector(int);

int main()
{
   int arreglo[tam]={2,4,5,-1},cant,o;//Inicializa el arreglo
   
   do{
   printf("*****Menu Principal*****\n1.Inicializacion Arreglo\n2.Datos Vector\n3.Salir\n");
    scanf("%i",&o);
    
    switch(o){
        case 1:
            inicializarArreglo(arreglo);
            getchar();
            getchar();
            system("clear");
            break;
        case 2:
           printf("Ingrese la cantidad de elementos del vector:\n");
           scanf("%i",&cant);
           datosVector(cant);
           getchar();
            getchar();
            system("clear");
        break;
        case 3:
            exit(0);
        break;
        default:
            printf("Escoga una opcion valida\n");
            getchar();
            getchar();
            system("clear");
    }
        
   }while(o!=3);

   

    return 0;
}

void inicializarArreglo(int arreg[tam]){
    int c=0;
    while(c<4){
        printf("arreglo[%i]=%i\n",c,arreg[c]);
        c ++;
    }
}

void datosVector(int cant){
    int c=0,arreglo[tam];
    while(c<cant){
        printf("Ingrese el elemento[%i]:",c);
        scanf("%i",&arreglo[c]);
        c++;
    }
     printf("Elementos del vector\n");
     c=0;
    while(c<cant){
        printf("Elemento[%i]=%i\n",c,arreglo[c]);
        c++;
    }
}

#include <stdio.h>
#include <stdlib.h>
# define tam 10

void inicializarArreglo(int[]);
void datosVector(int);
void busquedaInfo(int);
void numerosPos(int);

int main()
{
   int arreglo[tam]={2,4,5,-1},cant,o;//Inicializa el arreglo
   
   do{
   printf("*****Menu Principal*****\n1.Inicializacion Arreglo\n2.Datos Vector\n3.Busqueda elementos\n4.Numeros positivos, negativos o ceros\n5.Salir\n");
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
            printf("Ingrese la cantidad de elementos del vector:\n");
           scanf("%i",&cant);
            busquedaInfo(cant);
            getchar();
            getchar();
            system("clear");
        break;
        case 4:
            printf("Ingrese la cantidad de elementos del vector:\n");
           scanf("%i",&cant);
           numerosPos(cant);
           getchar();
            getchar();
            system("clear");
        break;
        case 5:
            exit(0);
        default:
            printf("Escoga una opcion valida\n");
            getchar();
            getchar();
            system("clear");
    }
        
   }while(o!=4);

   

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

void busquedaInfo(int cant){
    int c=0,arreglo[tam],num,rep=0;
    while(c<cant){
        printf("Ingrese el elemento[%i]:",c);
        scanf("%i",&arreglo[c]);
        c++;
    }
    
    printf("Ingrese el numero a buscar:\n");
    scanf("%i",&num);
    c=0;
    while(c<cant){
        if(num==arreglo[c]){
            rep++;
        }
        c++;
    }
    printf("El numero %i se repite %i veces\n",num,rep);
}

void numerosPos(int cant){
    int c,arreglo[cant],pos=0,neg=0,cer=0;
    for(c=0;c<cant;c++){
        printf("Ingrese el %i numero:\n",c+1);
        scanf("%i",&arreglo[c]);
        if(arreglo[c]>0){
            pos++;
        }else if(arreglo[c]<0){
            neg++;
        }else{
            cer++;
        }
    }
    
    printf("Ha ingresado:\n %i numeros positivos\n%i numero negativos\n%i numeros nulos\n",pos,neg,cer);
    

}

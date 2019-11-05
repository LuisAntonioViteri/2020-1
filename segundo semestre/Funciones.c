//realizar un progrma en c que calcul el area de un circulo
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float areaCirculo(float);
int factorial(int);
int tablaMul(int,int);
void funcionPar(int);
void numerosPositivos(int);
int main(){
    
    int opcion,num,lim;
    float radio;
    do{
    printf("*Menu Principal*\n1.Area de un circulo\n2.Factorial de un numero\n3.Tabla de un numero\n4.Numero Par\n5.N numeros positivos,negativo,cero\n6.Salir\n");
    scanf("%i",&opcion);
    
        switch(opcion){
            case 1:
                printf("Ingrese el radio del circulo:\n");
                scanf("%f",&radio);
                printf("El area del circulo es: %2.f\n ",areaCirculo(radio));
                system("pause");//Pausa hasta aplastar una tecla
                system("clear");//limpia la consola
                break;
            case 2:
                printf("Ingrese el numero:\n");
                scanf("%i",&num);
                printf("El factorial del numero es: %i",factorial(num));
                break;
            case 3:
                printf("Ingrese la tabla que desea visualizar:\n");
                scanf("%i",&num);
                printf("Ingrese el limite que desea visualizar::\n");
                scanf("%i",&lim);
                tablaMul(num,lim);
                break;
            case 4:
                printf("Ingrese un numero:");
                scanf("%i",&num);
                funcionPar(num);
            break;
            case 5:
                printf("¿Cuantos numeros va a ingresar?");
                scanf("%i",&lim);
                numerosPositivos(lim);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Ingrese una opcion valida\n");
        }
    }while(opcion>=0||opcion<5);   
    return 0;
}

float areaCirculo(float radio){
    float area=0,pi=3.1416;
    area=pi*(pow(radio,2));
    return area;
}

int factorial(int num){
     int fact=1,cont=1;
     while(cont<=num){
         fact=fact*cont;
         cont++;
     }
    return fact;
}

int tablaMul(int num,int lim){
    int cont=1,tabla=1;
    while(cont<=lim){
        tabla=num*cont;
        printf("%i*%i=%i\n ",num,cont,tabla);
        cont ++;
    }
    return tabla;
}

void funcionPar(int num){
    if(num%2==0){
        printf("Es par\n");
    }else{
        printf("Es impar\n");
    }
}
void numerosPositivos(int lim){
    int cont,pos=0,neg=0,cer=0,num;
    for(cont=1;cont<=lim;cont++){
        printf("Ingrese el %i numero:\n",cont);
        scanf("%i",&num);
        if(num>0){
            pos++;
        }else if(num<0){
            neg++;
        }else{
            
        }
    }
    
    printf("Ha ingresado:\n%i numeros positivos\n%i numero negativos\n%i numeros nulos\n",pos,neg,cer);
    
}



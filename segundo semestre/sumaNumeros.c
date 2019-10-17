#include <stdio.h>

int main()
{
    int num,suma,cont=1,ing;
    
    printf("Cuantos numeros desea ingresar:\n");
    scanf("%d",&ing);
    
    while(cont<ing){
        scanf("%d\n",&num);
        suma=suma+num;
        cont ++;
    }
    printf("La suma es: %d",suma);

    return 0;
}

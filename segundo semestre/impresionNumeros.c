#include <stdio.h>

int main()
{
    int num,cont=1,suma;
    
    printf("Cuantos numeros va a ingresar:\n");
    scanf("%d",&num);
    
    while(cont<=num){
        printf("%d\n",cont);
        suma=suma+cont;
        cont ++;
    }
    
    printf("La suma de %d numeros es: %d",num,suma);

    return 0;
}

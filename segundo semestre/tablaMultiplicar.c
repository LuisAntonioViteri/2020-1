#include <stdio.h>

int main()
{
    int cont=1,num,max,tabla;
    
    printf("Ingrese la tabla que desea visualizar:\n");
    scanf("%d",&num);
    printf("Ingrese el limite que desea visualizar::\n");
    scanf("%d",&max);
    
    while(cont<=max){
        tabla=num*cont;
        printf("%d\n",tabla);
        cont ++;
    }

    return 0;
}

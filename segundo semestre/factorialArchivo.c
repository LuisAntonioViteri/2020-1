include <stdio.h>
int factorial(int);
void leerDatos(int),
FILE *archivo

int main()
{
    
    int num;
    leerDatos(num);
    return 0;
}

void leerDatos(int num){
    archivo=fopen("factorial.txt","r");
    fscan(archivo,"Ingrese el numero:%d\n",%num);
    printf("Ingrese el numero:%d\n",num);
    fscanf(archivo,"%d",factorial(num));
    printf("El factorial es %d",factorial(num));
    fclose(archivo);
}

int factorial(int num){
    int fact=1,c=1;
    while(c<=num){
        fact=fact*c;
        c++;
    }
    printf("\nEl factorial del numero %d es: %d\n",num,fact);
	fprintf(archivo,"El factorial del numero %d es: %d\n",num,fact);
    
}

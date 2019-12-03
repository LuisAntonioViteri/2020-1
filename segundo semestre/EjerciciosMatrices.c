#include<stdio.h>
#include <stdlib.h>
#define tam 50

void inicializaMatriz(float[][tam]);

float ingresoDatosMatriz(int,int);
void notasEstudiante(int,int);
void main()
{
	float arreglo[][tam]={{5.4,7.3,10.0},{2.5,8.0,5.0}};
	int op=0,fil,col,est,max;
	while(op<=2)
	{
		printf("1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Notas Estudiante\n4.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaMatriz(arreglo);
				getchar();
				system("clear");
			break;
			case 2:
				printf("Ingrese el numero de filas:");
				scanf("%d",&fil);
				printf("Ingrese el numero de columnas:");
				scanf("%d",&col);
				printf("La suma es %.1f\n",ingresoDatosMatriz(fil,col));
	        case 3:
	            do{
	                printf("Ingrese el numero de estudiantes:");
				    scanf("%d",&est);
				    printf("Ingrese el numero de notas:");
				    scanf("%d",&max);
				    notasEstudiante(est,max);
	            }while(est<=0||max>=0);
	        
	        break;
	        case 4:
	        
	        break;
			case 5:
				exit(0);
			break;
			default:
				printf("Opcion Invalida\n");
			break;
		}
	}
}
void inicializaMatriz(float arreglo[tam][tam])
{
	int i=0,j=0;
	while(i<2)
	{
		j=0;
		while(j<3)
		{
			printf("arreglo[%d][%d]=%.2f\n",i,j,arreglo[i][j]);
			j++;
		}
	i++;
	}
}

float ingresoDatosMatriz(int filas, int colum)
{
	int i=0,j=0;
	float arreglo[filas][colum],suma=0;
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&arreglo[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",arreglo[i][j]);
			suma=suma+arreglo[i][j];
			j++;
		}
		printf("\n");
	i++;
	}
	return suma;
}
//Fila 1: Realizar un programa que permita ingresar el número de estudiantes y el numero de notas, imprima las notas de cada estudiante, determine el promedio de cada estudiante, el mayor y menor promedio.
void notasEstudiante(int est,int max){
    int j,i,mayor,menor;
    float arreglo[est][max],suma,promedio[est];
    
    for(i=0;i<est;i++){
        printf("Ingrese las notas del Estudiante %i:\n",i);
        for(j=0;j<max;j++){
            printf("Ingrese la nota %i:\n",j);
            scanf("%f",&arreglo[i][j]);
        }
        
    }
    
    for(i=0;i<est;i++){
        printf("Las notas del Estudiante %i son:\n",i);
        for(j=0;j<max;j++){
            printf("Nota %i: %.2f \n",j,arreglo[i][j]);
            suma=suma+arreglo[i][j];
        }
        promedio[i]=suma/max;
        printf("El promedio de Estudiante %i es: %.2f\n",i,promedio[i]);
        suma=0;
    }
    
    mayor = promedio[0]; 
    menor = promedio[0]; 
 
    for (i=0; i<est; i++){
     if (promedio[i]> mayor){
        mayor=promedio[i];
        }else if (promedio[i]< menor){
        menor=promedio[i];
     }
    }
    printf("El promedio mayor es %d\n", mayor);
    printf("El promedio menor es %d\n", menor);
    
}

#include<stdio.h>
#include<stdlib.h>
#define tam 50
void inicializaMatriz(float[][tam]);
float ingresoDatosMatriz(int,int);
void promEstudiante(int nEst,int nNotas);
void diagonalMatriz(int fil,int col);
void sumaMatrices(int fil,int col);
FILE *archivo;
void main()
{
	float arreglo[][tam]={{5.4,7.3,10.0},{2.5,8.0,5.0}};
	int op=0,nest,nnotas,fil,col;
	archivo=fopen("archivo.txt","w");
	while(op!=5)
	{
		printf("1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Promedio Estudiantes\n4.Diagonal Matriz\n5.Suma Matrices\n6.Salir\n");
		fprintf(archivo,"1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Promedio Estudiantes\n4.Diagonal Matriz\n5.Suma Matrices\n6.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		fscanf(archivo,"Ingrese la opcion:",%op);
		
		switch(op)
		{
			case 1:
				inicializaMatriz(arreglo);
				getch();
				system("cls");
			break;
			case 2:
				printf("Ingrese el numero de filas:");¿
				scanf("%d",&fil);
				fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
				printf("Ingrese el numero de columnas:");
				scanf("%d",&col);
				fscanf(archivo,"Ingrese el numero de columnas:%d\n",%col);
				printf("La suma es %.1f\n",ingresoDatosMatriz(fil,col));
				fscanf(archivo,"La suma es %.1f\n",ingresoDatosMatriz(fil,col));
			case 3:
				printf("Ingrese el numero de estudiantes:");
				scanf("%d",&nest);
				fscanf(archivo,"Ingrese el numero de estudiantes:%d\n",%nest);
				printf("Ingrese el numero de calificaciones:");
				scanf("%d",&nnotas);
				fscanf(archivo,"Ingrese el numero de calificaciones:%d\n",%nnotas);
				promEstudiante(nest,nnotas);
			break;	
			case 4:
				printf("Ingrese el numero de filas:");
				scanf("%d",&fil);
				fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
				printf("Ingrese el numero de columnas:");	
				scanf("%d",&col);
				fscanf(archivo,"Ingrese el numero de columnas:%d\n",%col);
				while(fil!=col)
				{
					printf("Ingrese el numero de filas:");
					scanf("%d",&fil);
					fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
					printf("Ingrese el numero de columnas:");	
					scanf("%d",&col);
					fscanf(archivo,"Ingrese el numero de columnas:%d\n",%col);
				}
				diagonalMatriz(fil,col);
			break;
			case 5:
				printf("Ingrese el numero de filas:");
				scanf("%d",&fil);
				fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
				printf("Ingrese el numero de columnas:");	
				scanf("%d",&col);
				fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
				while(fil!=col)
				{
					printf("Ingrese el numero de filas:");
					scanf("%d",&fil);
					fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
					printf("Ingrese el numero de columnas:");	
					scanf("%d",&col);
					fscanf(archivo,"Ingrese el numero de filas:%d\n",%fil);
				}
				sumaMatrices(fil,col);
			break;
			case 6:
				exit(0);
			break;
			default:
				printf("Opcion Invalida\n");
				fprintf(archivo,"Opcion invalida\n");
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
			fprintf(archivo,"arreglo[%d][%d]=%.2f\n",i,j,arreglo[i][j]);
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
			fscanf(archivo,"Ingrese el elemento[%d][%d]:",i,j,%arreglo[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	fprintf(archivo,"Elementos de la Matriz\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			suma=suma+arreglo[i][j];
			j++;
		}
		printf("\n");
		fprintf(archivo,"\n");
	i++;
	}
	return suma;
}

void promEstudiante(int nestu, int nnota)
{
	int i=0,j;
	char nombre[nestu][20];
	float notas[nestu][nnota],suma=0,prom=0,mayor=0,menor=9999;
	while(i<nestu)
	{
		j=0;
		printf("Estudiante %d\n",i+1);
		fprintf(archivo,"Estudiante %d\n",i+1);
		fflush(stdin);
		printf("Ingrese el nombre del estudiante:");
		gets(nombre[i]);
		fgets(archivo,"Ingrese el nombre del estudiante:%s\n",nombre[i]);
		while(j<nnota)
		{
			printf("Ingrese la calificacion %d:",j+1);
			scanf("%f",&notas[i][j]);
			fscanf(archivo,"Ingrese la calificacion %d:",j+1,%notas[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	puts("Calificaciones de Estudiantes\n");
	fputs(archivo,"Calificaciones de Estudiantes\n");
	while(i<nestu)
	{
		j=0,suma=0;
		printf("Estudiante %d\n",i+1);
		fprintf(archivo,"Estudiante %d\n",i+1);
		while(j<nnota)
		{
			printf("Nota %d=%.2f\n",j+1,notas[i][j]);
			fprintf(archivo,"Nota %d=%.2f\n",j+1,notas[i][j]);
			suma=suma+notas[i][j];
			j++;
		}
		prom=suma/nnota;
		printf("El promedio de %s es %.2f",nombre[i ],prom);
		fprintf(archivo,"El promedio de %s es %.2f\n",nombre[i ],prom);
		printf("\n");
		if(prom>mayor)
		   mayor=prom;
		if (prom<menor)
		    menor=prom;
	i++;
	}
	printf("El mayor promedio es %.1f\n",mayor);
	fprintf(archivo,"El mayor promedio es %.1f\n",mayor);
	printf("El menor promedio es %.1f\n",menor);
	fprintf(archivo,"El menor promedio es %.1f\n",menor);
}

void diagonalMatriz(int filas, int colum)
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
			fscanf(archivo,"Ingrese el elemento[%d][%d]:%f\n",i,j,%arreglo[i][j]);
		j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	fprintf(archivo,"Elementos de la Matriz\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			j++;
		}
		printf("\n");
		fprintf(archivo,"\n");
	i++;
	}
	i=0;
	printf("Elementos de la Diagonal\n");
	fprintf(archivo,"Elementos de la Diagonal\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			if(i==j)
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			j++;
		}
		printf("\t");
		fprintf(archivo,"\t");
	i++;
	}
}

void sumaMatrices(int filas, int colum)
{
	int i=0,j=0;
	float matrizA[filas][colum],matrizB[filas][colum],matrizC[filas][colum];
	printf("Matriz A\n");
	fprintf(archivo,"Matriz A\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&matrizA[i][j]);
			fscanf(archivo,"Ingrese el elemento[%d][%d]:%f\n",i,j,%matrizA[i][j]);
		j++;
		}
	i++;
	}
	printf("Matriz B\n");
	fprintf(archivo,"Matriz B\n");
	i=0;
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&matrizB[i][j]);
			fscanf(archivo,"Ingrese el elemento[%d][%d]:%f\n",i,j,%matrizA[i][j]);
		j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz A\n");
	fprintf(archivo,"Elementos de la Matriz A\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",matrizA[i][j]);
			fprintf(archivo,"%.2f\t",matrizA[i][j]);
			j++;
		}
		printf("\n");
		fprintf(archivo,"\n");
	i++;
	}
	i=0;
	printf("Elementos de la Matriz B\n");
	fprintf(archivo,"Elementos de la Matriz B\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",matrizB[i][j]);
			fprintf(archivo,"%.2f\t",matrizB[i][j]);
			j++;
		}
		printf("\n");
		fprintf(archivo,"\n");
	i++;
	}
	i=0;
	printf("Matriz Resultante\n");
	fprintf(archivo,"Matriz Resultante\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
			printf("%.2f\t",matrizC[i][j]);
			fprintf(archivo,"%.2f\t",matrizC[i][j]);
			j++;
		}
		printf("\n");
		fprintf(archivo,"\n");
	i++;
	}
}





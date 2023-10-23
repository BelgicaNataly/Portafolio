#include <stdio.h>

int main(int argc, char *argv[]) {
	int n=0, m=0;
	
	printf("Ingrese el tamanio de sus matrices:\n");
	printf("\t Filas: ");
	scanf("%d",&n);
	printf("\t Columnas: ");
	scanf("%d",&m);
	
	int matriz1[n][m], matriz2[n][m], i,j;
	
	printf("Matriz 1:\n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf("Ingrese un numero entero en la fila %d, columna %d: ", i,j);
			scanf("%d", &matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2:\n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf("Ingrese un numero entero en la fila %d, columna %d: ", i,j);
			scanf("%d", &matriz2[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 1: \n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf(" %d ", matriz1[i][j]);	
		}
		printf("\n");
	}
	
	printf("Matriz: \n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf(" %d ", matriz2[i][j]);	
		}
		printf("\n");
	}
	
	printf("Matriz sumada: \n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf(" %d ", matriz1[i][j]+matriz2[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}

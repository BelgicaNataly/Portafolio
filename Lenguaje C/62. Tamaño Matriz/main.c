#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n=0, m=0;
	
	printf("Ingrese el tamanio de su matriz:\n");
	printf("\t Filas: ");
	scanf("%d",&n);
	printf("\t Columnas: ");
	scanf("%d",&m);
	
	int matriz[n][m], i,j;

	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf("Ingrese un numero entero en la fila %d, columna %d: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz: \n");
	for (i = 0; i < n; i ++)
	{
		for(j = 0; j < m; j ++)
		{
			printf(" %d ", matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nMatriz inversa: \n");
	for (i = n-1; i > -1; i --)
	{
		for(j = m-1; j >= 0; j --)
		{
			printf(" %d ", matriz[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}

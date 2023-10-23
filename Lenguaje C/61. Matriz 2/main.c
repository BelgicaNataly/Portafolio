#include <stdio.h>

int main(int argc, char *argv[]) {

	int matriz[3][3], i,j;

	for (i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			printf("Ingrese un numero entero en la fila %d, columna %d: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			printf(" %d ", matriz[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}

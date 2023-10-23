#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int matriz[5];
	int i, j;
	for(i=0; i<5; i++)
	{
		printf("Ingrese un valor para la posicion %d: ", i);
		scanf("%d",&matriz[i]);
	}
	
	for(j=4; j>=0; j--)
	{
		printf("%d \t", matriz[j]);
	}
	
	return 0;
}

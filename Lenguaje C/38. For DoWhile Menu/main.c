#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n, i;
	char op;
	
	do
	{
		printf("Ingrese la tabla que desea calcular: ");
		scanf("%d",&n);
		
		for(i=1;i<=12;i++)
		{
			printf("%d x %d = %d \n", n, i, n*i);
		}
		
		printf("Desea mostrar otra tabla: ");
		fflush(stdin);
		scanf("%c",&op);
		
	}while(op!='n');
	
	return 0;
}

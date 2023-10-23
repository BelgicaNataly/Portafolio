#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n, i;
	
	printf("Ingrese la tabla que desea calcular: ");
	scanf("%d",&n);
		
	for(i=1;i<=12;i++)
		printf("%d x %d = %d \n", n, i, n*i);
	
	return 0;
}

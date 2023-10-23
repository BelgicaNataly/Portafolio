#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float sum=0, n;
	
	do
	{
		printf("Ingrese un numero entero o decimal: ");
		scanf("%f",&n);
		sum+=n;
	}while(n != 0);
	
	printf("La sumatoria es: %.2f", sum);
	
	return 0;
}

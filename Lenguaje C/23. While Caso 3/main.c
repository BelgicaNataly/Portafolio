#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cont=0, sum=0, num, n;
	
	printf("Ingrese la cantidad de numeros que desea sumar: ");
	scanf("%d",&n);
	
	while(cont<n)
	{
		cont++;
		printf("Ingrese una cantidad: ");
		scanf("%d",&num);
		sum=sum+num;
	}
	
	printf("La suma total es = %d", sum);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, num, sum=0, cont=0;
	
	printf("Ingrese la cantidad de numeros que desea sumar: ");
	scanf("%d",&num);
	
	while(cont < num){
		cont++;
		printf("Ingrese un numero: ");
		scanf("%d",&n);
		sum+=n;
	}
	
	if(sum>500)
		printf("La sumatoria es: %d",sum);
		
	return 0;
}

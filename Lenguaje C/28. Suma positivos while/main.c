#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, sum=0;
	
	while(n>=0){
		printf("Ingrese un numero: ");
		scanf("%d",&n);
		if(n>=0)
			sum+=n;
	}
	
	printf("La suma de los numeros ingresados es: %d",sum);
	
	return 0;
}

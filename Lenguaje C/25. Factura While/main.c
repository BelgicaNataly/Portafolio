#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num, cont=0;
	float n,desc, sum=0;
	
	printf("Ingrese la cantidad de productos a facturar: ");
	scanf("%d",&num);
	
	while(cont < num){
		cont++;
		printf("Ingrese el costo del producto %d: ", cont);
		scanf("%f",&n);
		sum+=n;
	}
	
	printf("El monto de la compra es: %.2f dolares \n",sum);
	
	if(sum>500)
		desc = sum*0.2;
		else
			desc =sum*0.05;
			
	printf("El monto a descontar es: %.2f dolares \n",desc);
	printf("El total a pagar es: %.2f dolares",sum-desc);
	
	return 0;
}

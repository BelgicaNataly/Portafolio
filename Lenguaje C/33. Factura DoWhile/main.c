#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float valor, sum=0, desc;
	int cont=1;
	
	do
	{
		printf("Ingrese el costo del producto %d: ", cont++);
		scanf("%f",&valor);
		if(valor>=10)
		{
			desc=valor*0.2;
			valor=valor-desc;
		}
		sum=sum+valor;
	}while(valor!=0);
	
	printf("El total a pagar es: %.2f",sum);
	
	return 0;
}

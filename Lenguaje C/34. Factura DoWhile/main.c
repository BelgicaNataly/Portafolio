#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float valor, sum=0, desc;
	int cont=1, edad;
	
	printf("Ingrese la edad del comprador: ");
	scanf("%d",&edad);
	
	do
	{
		printf("Ingrese el costo neto del producto %d: ", cont++);
		scanf("%f",&valor);
		if(valor>=100)
		{
			desc=valor*0.2;
			valor=valor-desc;
		}
		else if(valor>=50&&valor<=99.99)
		{
			desc=valor*0.1;
			valor=valor-desc;
		}
		else if(valor>=10&&valor<=49.99)
		{
			desc=valor*0.05;
			valor=valor-desc;
		}
		sum=sum+valor;
	}while(valor!=0);
	
	if(edad<65)
		sum=sum*1.12;
	
	printf("El total a pagar es: %.2f",sum);
	
	return 0;
}

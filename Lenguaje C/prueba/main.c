#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float l1, l2, l3;
	
	printf("Ingrese el lado 1:");
	scanf("%d",&l1);
	printf("Ingrese el lado 2:");
	scanf("%d",&l2);
	printf("Ingrese el lado 3:");
	scanf("%d",&l3);
	
	if((l1==l2) && (l1==l3))
		printf("Es un triangulo equilatero");
	else if((l1==l2)|| (l1==l3) || (l3==l2))
		printf("Es un triangulo isoceles");
	else
	printf("Es un triangulo escaleno");
		
	return 0;
}

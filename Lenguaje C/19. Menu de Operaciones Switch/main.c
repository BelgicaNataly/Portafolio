#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int op;
	float n1, n2;
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &n1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &n2);
	printf("Escoja la operacion que desea realizar:\n ");
	printf("\t 1. Suma \n");
	printf("\t 2. Resta \n");
	printf("\t 3. Multiplicacion \n");
	printf("\t 4. Division \n");
	printf("Opcion: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1: 
				printf("\t %.0f + %.0f = %.0f", n1, n2, n1+n2);
				break;
		case 2:
				printf("\t %.0f - %.0f = %.0f", n1, n2, n1-n2);
				break;
		case 3: 
				printf("\t %.0f * %.0f = %.0f", n1, n2, n1*n2);
				break;
		case 4:
				printf("\t %.0f / %.0f = %.2f", n1, n2, n1/n2);
				break;
		default: printf("\tNO HA ESCOGIDO UNA OPERACION A REALIZAR \n \t\t   FIN DEL PROGRAMA");
	}
	
	return 0;
}

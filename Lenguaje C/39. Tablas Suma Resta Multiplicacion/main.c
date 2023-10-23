#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int opc, n, i;
	
	do
	{
		
		printf("Escoja que tabla desea motrar: \n");
		printf("1. Suma \n");
		printf("2. Resta \n");
		printf("3. Multiplicacion \n");
		printf("4. Salir \n");
		printf("\tOpcion: ");
		scanf("%d",&opc);
		printf("Ingrese el numero que desea calcular: ");
		scanf("%d",&n);
		switch(opc)
		{
			case 1: 
				for(i=1;i<=12;i++)
				{
					printf("%d + %d = %d \n", n, i, n+i);
				}
				break;
			case 2: 
				for(i=1;i<=12;i++)
				{
					printf("%d - %d = %d \n", n, i, n-i);
				}
				break;
			case 3: 
				for(i=1;i<=12;i++)
				{
					printf("%d x %d = %d \n", n, i, n*i);
				}
				break;
		}
		
		printf("Desea mostrar otra tabla: ");
		scanf("%d",&opc);
			
	}while(opc!=4);
	
	return 0;
}

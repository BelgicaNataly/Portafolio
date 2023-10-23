#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Escoger un numero del 1 al 5: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("Correcto \n");
				printf("Ha elegido el numero 1");
				break;
		case 2: printf("Correcto \n");
				printf("Ha elegido el numero 2");
				break;
		case 3: printf("Correcto \n");
				printf("Ha elegido el numero 3");
				break;
		case 4: printf("Correcto \n");
				printf("Ha elegido el numero 4");
				break;
		case 5: printf("Correcto \n");
				printf("Ha elegido el numero 5");
				break;
		default: printf("Incorrecto \n");
				printf("No elegiste un numero del 1 al 5");
				break;
	}
	
	return 0;
}

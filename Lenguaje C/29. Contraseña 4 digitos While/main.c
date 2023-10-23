#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int contr, verif;
	
	printf("Ingrese una contrasenia de 4 digitos (solo numeros): ");
	scanf("%d",&contr);
	
	while(contr<0 || contr>9999)
	{
		printf("ERROR: \nContrasenia no aceptada ");
		printf("\nIngrese una contrasenia de 4 digitos (solo numeros): ");
		scanf("%d",&contr);
	}
	
	printf("Ingrese la verificacion de su contrasenia: ");
	scanf("%d",&verif);
	
	while(contr != verif)
	{
		printf("ERROR: \nLas contrasenias no coinciden ");
		printf("\nIngrese nuevamente la verificacion: ");
		scanf("%d",&verif);
	}
		printf("Contrasenia ingresada correctamente ");
	
	return 0;
}

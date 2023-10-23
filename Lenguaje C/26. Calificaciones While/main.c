#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float calif;
	
	printf("Ingrese la nota de la materia de Programacion: ");
	scanf("%f",&calif);
	
	while(calif<0 || calif>10)
	{
		printf("ERROR: \nNota incorrecta, debe ser mayor a 0 y menor obigual a 10 \n");
		printf("Vuelva a ingresar la nota de la materia de Programacion: ");
		scanf("%f",&calif);
	}
	
	return 0;
}

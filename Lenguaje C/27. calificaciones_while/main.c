#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float calif, recup, prom;
	
	printf("Ingrese la nota de la materia de Programacion: ");
	scanf("%f",&calif);
	
	while(calif<0 || calif>10)
	{
		printf("ERROR: \nNota incorrecta, debe ser mayor a 0 y menor o igual a 10 \n");
		printf("Vuelva a ingresar la nota de la materia de Programacion: ");
		scanf("%f",&calif);
	}
	
	if(calif>=7)
		printf("El estudiante APRUEBA con: ");
	else
	{
		printf("Ingrese la nota de recuperacion: ");
		scanf("%f",&recup);
		while(recup<0 || recup>10)
		{
			printf("ERROR: \nNota incorrecta, debe ser mayor a 0 y menor o igual a 10 \n");
			printf("Vuelva a ingresar la nota de recuperacion: ");
			scanf("%f",&recup);
		}
		prom = (recup + calif) / 2;
		calif = prom;
		
		if(prom>=7)
			printf("El estudiante APRUEBA con: ");
		else
			printf("El estudiante REPRUEBA con: ");
	}
	printf("%.2f", calif);
	
	return 0;
}

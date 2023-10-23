#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float tareas, evaluaciones, examen, promedio;
	
	printf("PROMEDIO \n");
	printf("Ingrese el promedio de sus tareas: ");
	scanf("%f", &tareas);
	printf("Ingrese el promedio de sus evaluaciones: ");
	scanf("%f", &evaluaciones);
	printf("Ingrese la calificaci%cn de su examen final: ", 162);
	scanf("%f", &examen);
	
	promedio = (tareas * 0.6) + (evaluaciones * 0.1) + (examen * 0.3);
	
	printf("El promedio del estudiante es: %.2f", promedio);
	
	if(promedio >= 7)
		printf("\nAPROBADO");
	
	return 0;
}



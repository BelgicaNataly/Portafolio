#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float Nota1, Nota2, Nota3, promedio;
	
	printf("PROMEDIO \n");
	printf("Ingrese la primera calificaci%cn: ", 162);
	scanf("%f", &Nota1);
	printf("Ingrese la segunda calificaci%cn: ", 162);
	scanf("%f", &Nota2);
	printf("Ingrese la tercera calificaci%cn: ", 162);
	scanf("%f", &Nota3);
	
	promedio = (Nota1 + Nota2 + Nota3) / 3;
	
	if(promedio >= 7)
		printf("APROBADO con: %.2f", promedio);
	else
		printf("REPROBADO con: %.2f", promedio);
		
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float notaFinal, supletorio, p;
	
	printf("Ingrese la calificacion final: ");
	scanf("%f",&notaFinal);
	
	if(notaFinal > 7)
	{
		printf("APRUEBA con %.2f", notaFinal);
	}
	else
	{
		printf("Ingrese la calificacion del supletorio: ");
		scanf("%f",&supletorio);
		
		p = (notaFinal + supletorio) / 2;
		
		if(p > 7)
			printf("APRUEBA con %.2f", p);
		else
			printf("REPRUEBA con %.2f", p);
	}
	
	return 0;
}

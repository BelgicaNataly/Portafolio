#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int contador=0, acumulador=0;
	
	while(contador<3)
	{
		contador++;
		acumulador+=contador;
		printf("Contador = %d y Acumulador = %d \n", contador, acumulador);
	}
	
	
	
	return 0;
}

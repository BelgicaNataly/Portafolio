#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float num, doble, triple;
	
	printf("DOBLE Y TRIPLE DE UN N%cMERO DECIMAL \n", 233);
	printf("Ingrese el n%cmero: ", 163);
	scanf("%f", &num);
	
	doble = num * 2;
	triple = num * 3;
	
	printf("Doble del n%cmero %f: %f", 163, num, doble);
	printf("\nTriple del n%cmero %f: %f", 163, num, triple);
	
	return 0;
}

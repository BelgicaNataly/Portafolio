#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int /*n,*/ i;
	
	//printf("Indique la cantidad de personas que va a registrar: ");
	//scanf("%d",&n);
	
	char nombre[5][50];
	
	for(i=0;i<5;i++)
	{
		printf("Ingrese el nombre de la persona %d: ",i+1);
		gets(nombre[i]);
	}
	
	for(i =0; i<5; i++ ){
	printf("%d. %s \n",i+1, nombre[i] );
	}
	
	return 0;
}

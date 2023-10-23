#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n;
	printf("Ingrese la cantidad de numeros que desea ingresar: ");
	scanf("%d",&n);
	int valor[n], i, mayor;
		
	for(i=0; i<n; i++){ 
		do{
			printf("%d. ", i+1);
			scanf("%d",&valor[i]);
		}
		while(valor[i]<0); 
	}	
	
	mayor = valor[0];	
	
	for(i=0; i<sizeof(valor)/sizeof(valor[0]); ++i){
		
		if(valor[i]>mayor)
		mayor=valor[i];
	}
	printf("El numero mayor que se ingreso fue el %d", mayor);
	
	return 0;
}

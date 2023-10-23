#include <stdio.h>

int main(int argc, char *argv[]) {
		
	int n;
	
	printf("Escoger un numero del 1 al 7 para mostrar el dia de la semana al cual pertenece dicho numero: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("LUNES \n");
				break;
		case 2: printf("MARTES \n");
				break;
		case 3: printf("MIERCOLES \n");
				break;
		case 4: printf("JUEVES \n");
				break;
		case 5: printf("VIERNES \n");
				break;
		case 6: printf("SABADO \n");
				break;
		case 7: printf("DOMINGO \n");
				break;
		default: printf("Usted no ha escogido un numero dentro del rango establecido para mostrar un dia de la semana \n");
				break;
	}
	
	return 0;
}

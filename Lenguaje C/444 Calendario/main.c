#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, d, m;
	
	printf("Ingrese el mes del 1 al 12 segun correponda: ");
	scanf("%d",&m);
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		d=31;
	}
	else if(m==4 || m==6 || m==9 || m==1)
	{
		d=30;
	}
	else if(m==2)
	{
		d=28;
	}
	
	for(i=1; i<=d; i++)
	{
		printf("%d \t", i);
		if(i%7==0)
			printf("\n");
	}
	
	return 0;
}

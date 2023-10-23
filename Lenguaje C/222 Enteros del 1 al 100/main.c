#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	
	for(i=0; i<100; i++)
	{
		printf("\t %d", i+1);
		if((i+1)%5==0)
			printf("\n");
	}
	
	return 0;
}

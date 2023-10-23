#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int cont=0;
	
	while(cont < 200){
		cont++;
		if(cont%2==0)
			printf("%d \t", cont);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main(){
	int i;

	for(i=0; i<5; i++){
		printf("%d\n", rand() % 100);		
	}

}

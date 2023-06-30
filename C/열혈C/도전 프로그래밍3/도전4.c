#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int i;
	srand(time(NULL));
	for(i=0; i<2; i++){
		printf("주사위 %d의 결과 : %d\n", i+1, rand() % 7);	
	}

} 

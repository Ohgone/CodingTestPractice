#include <stdio.h>
#include <math.h>

void main(){
	int num = 0;
	printf("상수 n 입력 : \n");
	scanf("%d", &num);
	
	int result = 1;
	while(pow(2, result) <= num){
		result++;
	}
	
	printf("%d", result-1);
}

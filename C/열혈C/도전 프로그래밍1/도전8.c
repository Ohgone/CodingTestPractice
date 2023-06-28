#include <stdio.h>
#include <math.h>

void main(){
	int num = 0;
	
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	int result = pow(2, num);
	
	printf("2의 %d승은 %d", num, result);
}

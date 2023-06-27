#include <stdio.h>

void main(){
	int num = 0;
	printf("10진수 정수를 입력하시오. : ");
	scanf("%d", &num);
	
	printf("10진수 %d를 16진수로 변환하면 %x입니다.", num, num);
}

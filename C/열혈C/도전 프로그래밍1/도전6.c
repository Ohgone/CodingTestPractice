#include <stdio.h>

void main(){
	int second = 0;
	printf("초를 입력하시오 : ");
	scanf("%d", &second);
	
	int minute = (second / 60);
	second = (second % 60);
	
	int hour = (minute / 60);
	minute = (minute % 60);
	
	printf("[h:%d, m:%d, s:%d]", hour, minute, second);
}

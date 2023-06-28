#include <stdio.h>

void main(){
	int num, i;
	int len = 0;
	int arr[10] = { 0 };
	
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);
	
	while (num >= 1){
		arr[len] = num % 2;
		num = num / 2;
		len++;		
	}
	
	for(i = len-1; i>=0; i--){
		printf("%d", arr[i]);
	}
}

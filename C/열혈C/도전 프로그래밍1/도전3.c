#include <stdio.h>

int gcd(int a, int b){
	int i = (a >= b)? a : b;
	int j = (a < b)? a : b;
	int temp;
	
	while (j != 0){
		temp = i;
		i = j;
		j = temp % j;
	}
	return i;
}

void main(){
	int a, b;
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	printf("%d", gcd(a, b));
}

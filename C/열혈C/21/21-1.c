#include <stdio.h>

int Conv(int* a){
	if(*a >= 'A' && *a <= 'Z'){
		*a += 32;
		return 0;
	}
	else if(*a >= 'a' && *a <= 'z'){
		*a -= 32;
		return 0;
	}
	else{
		return -1;
	}	
}

void main(){
	int a;
	a = getchar();
	if (Conv(&a) == -1){
		printf("문자가 아닙니다.\n");
		exit(0);
	}
	putchar(a);
}

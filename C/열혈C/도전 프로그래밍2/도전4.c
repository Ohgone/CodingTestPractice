#include <stdio.h>
#include <string.h>

int check(char* str, int len){
	int i = 0;
	len--;
	while (i < len){
		if(str[i] != str[len]){
			return 0;
		}
		i++;
		len--;
	}
	return 1;
}

void main(){
	char str[100];
	printf("문자열 입력 : ");
	gets(str);
	int flag = check(str, strlen(str));
	
	if (flag){
		printf("회문입니다.\n");
	}
	else{
		printf("회문이 아닙니다.\n");
	}
}

#include <stdio.h>

void main(){
	int arr[10] = { 0 };
	int i = 0, temp = 0;
	int odd = 0, even = 9;
	
	printf("총 10개의 숫자 입력\n");
	for(i=0; i<10; i++){
		printf("입력:");
		scanf("%d", &temp);	
	
		if ((temp % 2) == 0){
			arr[even--] = temp;
		}
		else {
			arr[odd++] = temp;
		}
	}
	
	printf("배열 요소의 출력 : ");
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}	
}

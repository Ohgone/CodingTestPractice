#include <stdio.h>

void PrintEven(int* arr){
	int i = 0;
	printf("짝수 출력 : ");
	for (i=0; i<10; i++){
		if ((arr[i] % 2) == 0)
			printf("%d ", arr[i]);
	}
	printf("\n"); 
}

void PrintOdd(int* arr){
	int i = 0;
	printf("홀수 출력 : ");
	for (i=0; i<10; i++){
		if ((arr[i] % 2) != 0)
			printf("%d ", arr[i]);
	}
	printf("\n"); 	
}

void main(){
	int arr[10] = {0};
	int i = 0;
	
	for (i=0; i<10; i++){
		printf("입력 : "); 
		scanf("%d", &arr[i]);	
	} 
	
	PrintEven(arr);
	PrintOdd(arr);
} 

#include <stdio.h>

void BubbleSort(int* arr){
	
	int i = 0;
	int n = 6;
	int temp = 0;

	
	while (n > 0){
		for (i=0; i<n; i++){
			if (arr[i] < arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp; 
			}
		}
		n--;
	}
	
}

void main(){
	int arr[7] = { 0 };
	int i;
	
	for (i=0; i<7; i++){
		printf("입력 : ");
		scanf("%d", &arr[i]);
	}
	
	BubbleSort(arr);
	
	printf("정렬 결과 : ");
	for (i=0; i<7; i++){
		printf("%d ", arr[i]);
	}
}

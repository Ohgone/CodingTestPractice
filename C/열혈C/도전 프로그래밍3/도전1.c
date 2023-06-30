#include <stdio.h>

void PrintArray(int arr[][4]){
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void ShiftRight90(int arr[][4]){
	int temp[16];
	int *Ptemp = temp; 
	int i, j;
	int n=0;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			temp[n++] = arr[i][j];
		}
	}
	n=0;
	for(j=3; j>-1; j--){
		for(i=0; i<4; i++){
			arr[i][j] = *(Ptemp + n++);
		}
	}
}

void main(){
	int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
	int i;
	
	printf("원본 배열 출력\n");
	PrintArray(arr);
	
	for(i=1; i<=3; i++){
		printf("%d 번째 90도 회전\n", i);
		ShiftRight90(arr);
		PrintArray(arr);
	}	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	srand(time(NULL));
	int arr[3];
	int input[3];
	int i, j, strike, ball;
	int count = 0; int check=0;
	
	for(i=0; i<3; i++){ arr[i] = (rand() % 10); }
	for(i=0; i<3; i++){
		check = 0;
		for(j=0; j<3; j++){ if(arr[i] == arr[j]){ check++; }}
		if (check > 1){ printf("중복된 랜덤값 생성"); exit(0); }}
	
	for(i=0; i<3; i++){ printf("%d ", arr[i]); }
	
	printf("\nSTART GAME!\n");
	while(1){
		strike = 0; ball = 0; count++;
		
		printf("%d번째 도전 결과 : ", count);
		for(i=0; i<3; i++){ scanf("%d", &input[i]); }
		
		for(i=0; i<3; i++){
			if (input[i] == arr[i]) { strike++; }
			else{ for(j=0; j<3; j++){ if (input[i] == arr[j]) { ball++; }}}}
			
		printf("%d STRIKE / %d BALL\n", strike, ball);
		if (strike == 3){ break; }
	}}

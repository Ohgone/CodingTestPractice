#include <stdio.h>

int IsPrime(int num){
	int i = 0;
	for (i=2; i<num; i++){
		if((num % i)  == 0){
			return 0;
		}
	}
	return 1;
}

void main(){
	int Count = 0;
	int Num = 2;
	
	while(Count < 10){
		if(IsPrime(Num)){
			printf("%d ", Num);
			Count++;
		}
		Num++;
	}
}

#include <stdio.h>

void gugudan(int a, int b){
	int i = 0, j = 0;
	for(i=a; i<=b; i++){
		printf("\n--------%d단---------\n", i);
		for(j=1; j<10; j++){
			printf("%d X %d = %d\n", i, j, i*j);	
		}
	}
}

void main(){
	int a=0, b=0;
	printf("구구단을 출력할 두 수를 입력하시오. : \n");
	scanf("%d %d", &a, &b);
	
	if (a<=b){
		gugudan(a, b);		
	}
	else{
		gugudan(b, a);
	}
	

}

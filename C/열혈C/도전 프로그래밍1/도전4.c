#include <stdio.h>

void main(){
	int i=0, j=0, k=0;
	for (i=0; i<=3; i++){
		for (j=0; j<=3; j++){
			for (k=0; k<=3; k++){
				if ((500 * i) + (700 * j) + (400 * k) == 1900){
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i+1, j+1, k+1);
				} 
			}
		}
	}
}

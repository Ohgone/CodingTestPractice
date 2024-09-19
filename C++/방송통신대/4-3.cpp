#include <iostream>

int findMax(int arr[], int n){
	int max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

float findMax(float arr[], int n){
	float max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

int main(){
	int intArr[] = {30, 2, 1, 16, 99, 65, 32, 11};
	float floatArr[] = {30.2, 2.1, 1.7, 16.32, 99.1, 65.34, 32.1, 11.123};
	
	std::cout << findMax(intArr, sizeof(intArr)/sizeof(intArr[0])) << std::endl;
	std::cout << findMax(floatArr, sizeof(floatArr)/sizeof(floatArr[0]));	
	return 0;
}

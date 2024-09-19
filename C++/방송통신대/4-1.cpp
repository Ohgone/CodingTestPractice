#include <iostream>

int findMax(int arr[], int n){
	int max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

int main(){
	int arr[] = {30, 2, 1, 16, 99, 65, 32, 11};
	std::cout << findMax(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}

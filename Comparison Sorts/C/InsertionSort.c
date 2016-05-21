#include <stdlib.h>

void InsertionSort(int arr[],int size){
	int swap;
	for(int i = 0; i < size ; i++){
		for(int j = i; j > 0 ; j--){
			if(arr[j] > arr[j-1]){
				swap = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = swap;
			}else break;
		}
	}
}

int main(){
	
}


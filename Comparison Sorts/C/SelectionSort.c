#include <stdlib.h>

void SelectionSort(int arr[],int size){
	int minim;
	int minimPos;
	for(int i = 0; i < size ; i++){
		minim = arr[i];
		minimPos = i;
		for(int j = i; j < size ; j++){
			if(arr[j] < minim){
				minim = arr[j];
				minimPos = j;
			}
		}
		arr[minimPos] = arr[i];
		arr[i] = minim;
	}
}

int main(){
	
}

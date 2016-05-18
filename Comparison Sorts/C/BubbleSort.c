#include <stdlib.h>
#include <stdio.h>

void BubbleSort(int arr[],int size){ // we pass the array and the size of it as arguments
	int swp;
	for(int i = size - 1;i > 0; i--){ // this for goes from the arrays end to the beginning to limit the end of the next one
		for(int j = 0; j < i; j++){ // this one goes from the begining to the to end defined by previous for
			if(arr[j] > arr[j + 1]){ // now the idea is to compare every element with the next
			// and swap them if the first one is more then the second
				swp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swp;
			}
		}
	}	
}

int main(){
}

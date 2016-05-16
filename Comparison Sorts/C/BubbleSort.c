#include <stdlib.h>
#include <stdio.h>

void BubbleSort(int arr[],int size){
	int swp;
	for(int i = size - 1;i > 0; i--)
		for(int j = 0;j < i; j++)
			if(arr[j] > arr[j + 1]){
				swp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swp;
			}
}

int main(){
}

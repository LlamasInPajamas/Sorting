#include <stdlib.h>
#include <stdio.h>

void QuickSort(int arr[],int start,int end){
	if(start >= end)return ;
	int pivot = start;
	int i = start + 1;
	int j = end;
	int swp;
	while(i < j){
		while(i < j && arr[i] <= arr[pivot])
			i++;
		while(j > i && arr[j] >= arr[pivot])
			j--;
		if(j > i){
			swp = arr[j];
			arr[j] = arr[i];
			arr[i] = swp;
		}
	}
	if(arr[j] < arr[pivot]){
		swp = arr[j];
		arr[j] = arr[pivot];
		arr[pivot] = swp;
		pivot = j;
	}
	QuickSort(arr, start, pivot - 1);
	QuickSort(arr, pivot + 1, end);
	return;
}

int main(){
}

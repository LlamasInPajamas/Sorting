#include <stdlib.h>

void QuickSort(int arr[],int start,int end){
	if(start >= end)return ;
	int pivot = start;
	int i = start + 1;
	int j = end;
	int swp;
	while(i < j){
		while(i < j && arr[i] < arr[pivot]){
			i++;
		}while(j > i && arr[j] > arr[pivot]){
			j--;
		}if(j > i){
			swp=arr[i];
			arr[i]=arr[j];
			arr[j]=swp;
			i++;
		}
	}
	if(arr[j] < arr[pivot]){
		swp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=swp;
		pivot = j;
	}else{
		swp=arr[pivot];
		arr[pivot]=arr[j - 1];
		arr[j - 1]=swp;
		pivot = j - 1;
	}
	QuickSort(arr, start, pivot - 1);
	QuickSort(arr, pivot + 1, end);
	return;
}

int main(){
}

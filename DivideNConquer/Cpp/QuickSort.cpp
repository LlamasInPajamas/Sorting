#include <bits/stdc++.h>
using namespace std;

void QuickSort(int arr[],int start,int end){
	if(start >= end)return ;
	int pivot = start;
	int i = start + 1;
	int j = end;
	while(i < j){
		while(i < j && arr[i] < arr[pivot]){
			i++;
		}while(j > i && arr[j] > arr[pivot]){
			j--;
		}if(j > i){
			swap(arr[j], arr[i]);
			i++;
		}
	}
	if(arr[j] < arr[pivot]){
		swap(arr[j], arr[pivot]);
		pivot = j;
	}else{
		swap(arr[j - 1], arr[pivot]);
		pivot = j - 1;
	}
	QuickSort(arr, start, pivot - 1);
	QuickSort(arr, pivot + 1, end);
	return;
}

int main(){
}


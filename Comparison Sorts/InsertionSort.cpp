#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int arr[],int size){
	for(int i = 0; i < size ; i++){
		for(int j = i; j > 0 ; j--){
			if(arr[j] > arr[j-1]){
				swap(arr[j], arr[j-1]);
			}else break;
		}
	}
}

int main(){
	
}


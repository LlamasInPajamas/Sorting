#include <bits/stdc++.h>

using namespace std;

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
		swap(arr[i], arr[minimPos]);
	}
}

int main(){
	
}

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int size){
	for(int i = size - 1;i > 0; i--)
		for(int j = 0;j < i; j++)
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
}

int main(){
}

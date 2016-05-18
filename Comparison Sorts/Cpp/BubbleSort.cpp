#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int size){// we pass the array and the size of it as arguments
	for(int i = size - 1;i > 0; i--)// this for goes from the arrays end to the beginning
		for(int j = 0;j < i; j++)// this one goes from the begining to the to end defined by previous for
			if(arr[j] > arr[j + 1]){// now the idea is to compare every element with the next
				swap(arr[j], arr[j + 1]);// and swap them if the first one is more then the second
			}
}

int main(){
}

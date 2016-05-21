#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[],int size){
	int minim;//variable to be used as minimum
	int minimPos;//variable to use as the position of min
	for(int i = 0; i < size ; i++){//changing the position of the change going from the first to the end
		minim = arr[i];//resetting variables
		minimPos = i;
		for(int j = i; j < size ; j++){//rushing through variables to select which to change
			if(arr[j] < minim){//if find any better than the one we have now
				minim = arr[j];//change it w the other
				minimPos = j;
			}
		}
		swap(arr[i], arr[minimPos]);//swaaap w the best match
	}
}

int main(){
	
}

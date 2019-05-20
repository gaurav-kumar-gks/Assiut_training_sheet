#include <bits/stdc++.h>
using namespace std;

void maxandmin(int arr[], int x){
	
	int max=0, min=0;
	for(short int i=0; i<x; i++){
		cin >> arr[i];
		if(i != 0){
			if(arr[i] > arr[max])
				max = i;
			if(arr[i] < arr[min])
				min = i;
		}
	}
	cout << arr[min]<< " "<< arr[max]<<endl;
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int x;
	cin >> x;

	int *arr = new int[x];
	maxandmin(arr, x);
	delete[] arr;
	return 0;
}

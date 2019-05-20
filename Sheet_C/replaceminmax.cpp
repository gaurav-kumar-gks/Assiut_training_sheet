#include <bits/stdc++.h>
using namespace std;

int main(){
	short int n, min_i, max_i;
	cin >> n;
	int *arr = new int[n];
	int min=0, max=0;
	for(short int i=0; i<n; i++){
		cin >> arr[i];
		if(i==0)
			min_i = max_i = 0;
		if(arr[i] > arr[max_i])
			max_i = i;
		if(arr[i] < arr[min_i])
			min_i = i;
	}
	
	arr[min_i] = arr[min_i] + arr[max_i];
	arr[max_i] = arr[min_i] - arr[max_i];
	arr[min_i] = arr[min_i] - arr[max_i];

	for(short int i=0; i<n; i++)	
		cout<<arr[i]<<" ";
	delete[] arr;
	return 0;
}

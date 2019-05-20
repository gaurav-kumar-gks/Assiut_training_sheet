#include <bits/stdc++.h>
using namespace std;

int main(){
	short int n, count=0;
	cin >> n;
	int *arr = new int[n];
	int min;
	for(short int i=0; i<n; i++){
		cin >> arr[i];
		
		if(i==0)
			min = arr[0];
		else{
			if(arr[i] < min)
				min = arr[i];
		}
	}
	for(short int i=0; i<n; i++){
		if(arr[i] == min)
			count++;
	}
	delete[] arr;
	
	if(count%2 == 0)
		cout << "Unlucky";
	else
		cout << "Lucky";

	return 0;
}

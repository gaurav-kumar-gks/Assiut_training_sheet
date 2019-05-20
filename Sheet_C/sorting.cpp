#include <bits/stdc++.h>
using namespace std;


int main(){
	short int n, i, j;
	cin >> n;
	
	short int arr[999];
	
	for(i=0; i<n; i++)
		cin >> arr[i];
	
	short int flag;
	for(i=0; i<n-1; i++){
		flag = 0;
		for(j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
				flag = 1;
			}
		}
		if(!flag)
			break;
	}
	
	for(i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
	return 0;
}

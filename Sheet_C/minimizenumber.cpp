#include <bits/stdc++.h>
using namespace std;

short int check(int *arr, short int n){
	
	for(short int i=0; i<n; i++)
		if(arr[i]%2 != 0)
			return 0;

	for(short int i=0; i<n; i++)
		arr[i] /= 2;
	return 1;
}
		
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int n, count=0;
	cin >> n;
	int *arr = new int[n];
	for(short int i=0; i<n; i++)
		cin>>arr[i];
	
	while(1){
		short int flag = check(arr, n);
		if(!flag)
			break;
		else
			count++ ; 
	}
	cout<<count;
	return 0;
}

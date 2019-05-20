#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	short int n;
	cin >> n;
	int *arr = new int[n];
	
	for(short int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(short int i=n-1; i>=0; i--){
		cout << arr[i] << " ";
	}
	delete[] arr;	
	return 0;
}

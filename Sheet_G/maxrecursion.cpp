#include <bits/stdc++.h>
using namespace std;
	
int maxrec(int arr[], int n){
	if(n==1)
		return arr[0]; 
	return max(arr[n-1], maxrec(arr, n-1));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int *arr = new int[n];
		
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int max = maxrec(arr, n);
	cout<<max;
	delete[] arr;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, max;
	cin >> n;
	int *arr = new int[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(i == 1)
			max = abs(arr[1] - arr[0]);	
		else if(i>1){	
			if(abs(arr[i] - arr[i-1]) > max)
				max = abs(arr[i] - arr[i-1]);
		}
	}
	cout<<max;
	delete[] arr;
	return 0;
}		

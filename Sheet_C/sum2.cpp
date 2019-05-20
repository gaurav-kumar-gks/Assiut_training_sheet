#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum=0;
	cin >> n;
	int *arr = new int[n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum+=arr[i];
	}
	cout<<sum;
	delete[] arr;
	return 0;
}

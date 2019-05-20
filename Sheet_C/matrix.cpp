#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, maj=0, min=0;
	cin >> n;
	int arr[100][100];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
			if(j==i)
				maj += arr[i][j];
			if(j == n-1-i)
				min += arr[i][j];
		}
	}
	cout<<abs(maj - min);
	
	return 0;
}
			

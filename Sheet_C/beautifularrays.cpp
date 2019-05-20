#include <bits/stdc++.h>
using namespace std;

void check(short int arr[], int n){
	short int i, j, k, flag;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			flag = 0;
			for(k=0; k<n; k++){
				if(arr[k] == arr[i] * arr[j]){
					flag = 1;
					break;
				}
			}
			if(!flag){
				cout<<"no\n";
				return;
			}
		}
	}
	cout<<"yes\n";
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int t, n, i;
	short int arr[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0; i<n; i++)
			cin >> arr[i]; 
		check(arr,n);
	}
	return 0;
}
		

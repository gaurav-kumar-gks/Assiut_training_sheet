#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	short int m, n, i, j;
	cin >> n >> m;
	
	int arr[100][100];
	int x;
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			cin >> arr[i][j];
	
	cin>>x;
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(arr[i][j] == x){
				cout<<"will not take number";
				return 0;
			}
	cout<<"will take number";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	short int t;
	cin >> t;
	
	int min_1, min_2;
	
	while(t--){
		short int n;
		cin >> n;
		int arr[100];
		for(short int i=0; i<n; i++){
			cin >> arr[i];
			
			if(i==0){
				min_1 = min_2 = arr[0];
			}
			else if(i==1){
				if(arr[1] > arr[0])
					min_2 = arr[1];
				else 
					min_1 = arr[1];
			}
			else{
				if( (arr[i] >= min_1) && (arr[i] < min_2) )
					min_2 = arr[i];
				else if(arr[i] < min_1){
					min_2 = min_1;
					min_1 = arr[i];
				}
			}
		}
		cout << min_1 + min_2<<"\n";
	}
	
	return 0;
}

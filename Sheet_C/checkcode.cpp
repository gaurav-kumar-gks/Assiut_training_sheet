#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int a, b;
	cin >> a >> b;
	char *arr = new char[a+b+1];
	for(short int i=0; i<a+b+1; i++){
		cin >> arr[i];
		if(i != a){
			if(!(arr[i]>='0' && arr[i] <= '9')){
				cout<<"No";
				delete[] arr;
				return 0;
			}
		}
		if((i == a) && (arr[a] != '-')){
			cout<<"No";
			delete[] arr;
			return 0;
		}
	}
	cout<<"Yes";
	delete[] arr;
	return 0;
}

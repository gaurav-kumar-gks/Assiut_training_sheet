#include <bits/stdc++.h>
using namespace std;

void pascals(short int n){

	for(short int line = 1; line <= n+1; line++){	 
		long long int C = 1;  
		for(int i = 1; i <= line; i++){  
			cout<< C<<" "; 
			C = C * (line - i) / i; 
		} 
		cout<<"\n"; 
	} 
}  


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int n;
	cin >> n;
	pascals(n);
	return 0;
}

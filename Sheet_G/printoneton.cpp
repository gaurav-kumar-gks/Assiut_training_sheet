#include <bits/stdc++.h>
using namespace std;

void print(short int n){
	if(n == 1)
		cout << "1" << endl;
	else{
		print(n-1);
		cout << n <<endl;
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int n;
	cin >> n;
	print(n);
	return 0;
}

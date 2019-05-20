#include <iostream>
using namespace std;

void print(int n){
	
	if(n==1){
		cout<<"1";
		return;
	}
	else if(n==0){
		cout<<"0";
		return;
	}
	else if(n>1){
		print(n%2);
		print(n/2);
	}
} 


int main(){
	short int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		print(n);
		cout<<"\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	
	short int n;
	cin >> n;
	for(short int i=n; i>=1; --i){
		for(short int j=1; j<=i; ++j)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}
	

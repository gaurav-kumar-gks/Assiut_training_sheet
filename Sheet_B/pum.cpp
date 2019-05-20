#include <iostream>
using namespace std;

int main(){
	short int n, sum=1;
	cin >> n;
	for(short int i=0; i<n; ++i){
		for(short int j=0; j<3; ++j){
			cout<<sum<<" ";
			++sum;
		}
		cout<<"PUM\n";
		++sum;
	}	
	return 0;
}

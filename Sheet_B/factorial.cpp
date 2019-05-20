#include <iostream>
using namespace std;

int main(){
	short int t, n;
	long long fac;
	cin >> t;
	while(t>0){
		fac = 1;
		cin>>n;
		for(short int i=1; i<=n; i++){
			fac = fac*i;
		}
		cout<<fac<<"\n";
		--t;
	}
	return 0;
}

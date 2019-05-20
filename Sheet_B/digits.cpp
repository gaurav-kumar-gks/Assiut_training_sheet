#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, a, k;
	short int i, j, t;
	cin >> t;
	
	while (t>0){
		cin >> n;
		a = n;
		i = 0;	
		while(a>=10){
			a = a/10;	
			++i;
		}
		for(j=i; j>=0; --j){
			
			if(j == 0){
				cout<<n;
				break;
			}
			else{
				k = pow(10,j);
				cout<<n/k<<" ";
				n = n%k;
			}
		}
		cout<<"\n";
		--t;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	short int m, n;
	int sum;

	while(1){
		cin >> m >> n;
		sum = 0;
		
		if(m<=0 || n<=0)
			break;
		
		if(m>n){
			m = m+n;
			n = m-n;
			m = m-n;
		}
		
		for(short int i = m; i<=n; ++i){
			cout<<i<<" ";
			sum+=i;
		}
		cout<<"sum ="<<sum<<"\n";
	} 	
	return 0;
}

#include <iostream>
using namespace std;	

int main(){
	short int n, i;
	int x, y, z;
	cin >> n;
	for(i=0; i<n; ++i){
		if(i==0){
			cout<<"0";
			x=0; y=0;
			continue;
		}
		else if(i==1){
			cout<<" 1";
			x=0; y=1;
			continue;
		}
		else{
			z = x+y;
			cout<<" "<<z;
			x = y; y = z;
		}
	}
		
	return 0;
}

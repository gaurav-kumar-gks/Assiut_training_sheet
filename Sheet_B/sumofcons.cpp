#include <iostream>
#include <cmath>
using namespace std;

int main(){
	short int t, x, y;
	int sum;
	cin >> t;
	while(t--){
		
		cin >> x >> y;
		sum = 0;
		if(abs(x-y)<=1){
			cout<<"0\n";
			continue;
		}
		
		if(y<x){
			x = x+y;	
			y = x-y;
			x = x-y;
		}
		
		for(short int i=x+1; i<y; i++){
			if(i%2!=0 && i!=y){
				sum+=i;
			}
		}
		cout<<sum<<"\n";
    }
		
	return 0;
}

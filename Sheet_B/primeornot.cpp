#include <iostream>
#include <cmath>
using namespace std;

int main(){
    short int t, i, prime;
	int n;
	cin >> t;
	while(t>0){
		cin >> n;
    	prime = 1;
		for(i=2; i<=sqrt(n); ++i){
        	if(n%i == 0){
            	cout<<"Not\n";
				prime = 0;
            	break;
        	}
    	}
		
		if(prime){
    		cout<<"Prime\n";
		}
		
		--t;
	}
    
    return 0;
}


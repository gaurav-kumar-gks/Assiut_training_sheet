#include <iostream>
using namespace std;

int main(){
    short int n, i;
    long long x, y, z;
    cin >> n;
    for(i=0; i<n; ++i){
        if(i==0){
            x=0; y=0;
			z = x + y;
            continue;
        }
        else if(i==1){
            x=0; y=1;
			z = x + y;
            continue;
        }
        else{
            z = x+y;
            x = y; y = z;
        }
    }
	cout<<z;

    return 0;
}


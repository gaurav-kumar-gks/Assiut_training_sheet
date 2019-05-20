#include <iostream>
using namespace std;

int main(){
    short int n, i, j;
    cin >> n;
    for(i=0; i<n; ++i){
        for(j=0; j<n-1-i; ++j){
            cout<<" ";
        }
        for(j=0; j<2*i+1; ++j){
            cout<<"*";
        }
        cout<<"\n";
    }
	for(i=n; i>0; --i){
        for(j=n-i; j>0; --j){
            cout<<" ";
        }
        for(j=2*i-1; j>0; --j){
            cout<<"*";
        }
        cout<<"\n";
    }		
    return 0;
}


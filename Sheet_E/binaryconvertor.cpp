#include <bits/stdc++.h>
using namespace std;

void print(long long n){

    if(n==1){
        cout<<"1";
        return;
    }
    else if(n==0){
        cout<<"0";
        return;
    }
    else if(n>1){
        
        print(n/2);
		print(n%2);
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long  x;
	cin >> x;
    print(x);
	
	return 0;
}

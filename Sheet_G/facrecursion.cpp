#include <bits/stdc++.h>
using namespace std;

long long int fac(short int n){
	if(n==1 || n==0)
		return 1;
	else
		return n*fac(n-1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int n;
	cin >> n;
	long long int x = fac(n);
	cout<<x<<endl;
	return 0;
}

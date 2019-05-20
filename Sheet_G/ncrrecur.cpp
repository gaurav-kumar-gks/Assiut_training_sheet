#include <bits/stdc++.h>
using namespace std;

long long comb(int n, int r){
	if(r==0 || r==n)
		return 1;
	return (n * comb(n-1, r-1))/r;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, r;
	cin >> n >> r;
	
	long long s = comb(n,r);
	cout<<s;
	return 0;
}

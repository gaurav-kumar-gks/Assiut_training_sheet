#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
		
	long long int a, b;
	cin >> a >> b;
	
	long long int sum;

	if(b<a){
		a = a+b;
		b = a-b;
		a = a-b;
	}
	sum = (b*(b+1))/2 - (a*(a+1))/2 + a;
	cout << sum << endl;
	return 0;
}
	

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	cout << a.length() << " " << b.length()<<"\n";
	cout << a + b <<"\n";
	
	a[0] = a[0] + b[0];
	b[0] = a[0] - b[0];
	a[0] = a[0] - b[0];
	
	cout << a << " " << b;
	return 0;
}

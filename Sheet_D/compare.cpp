#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string x, y;
	getline(cin, x);
	getline(cin, y);
	
	if( (x.compare(y)) < 0 )
		cout<<x;
	else
		cout<<y;
  	return 0;
}
	

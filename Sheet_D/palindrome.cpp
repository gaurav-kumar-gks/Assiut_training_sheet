#include <bits/stdc++.h>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin >> s;
	string y = s;
	reverse(y.begin(), y.end());
	if(s.compare(y) == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
	

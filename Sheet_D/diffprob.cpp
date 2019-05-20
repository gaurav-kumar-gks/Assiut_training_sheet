#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);
	int l = s.length();
	int one=0, zero=0;
	for(int i=0; i<l; i++){
		if(s[i] - '0' == 0)
			zero++;
		else
			one++;
	}
	cout<<abs(zero - one);
	return 0;
}

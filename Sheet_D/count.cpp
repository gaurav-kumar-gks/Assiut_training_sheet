#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum=0;
	string s;
	getline(cin, s);
	for(auto i=0; i<s.length(); i++){
		
		sum += s[i] - '0';
	}
	cout<<sum;
 	
	return 0;
}

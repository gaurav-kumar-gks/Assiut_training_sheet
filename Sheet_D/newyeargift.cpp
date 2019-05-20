#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	getline(cin, s);
	
	for(short int i=0; i<19; i++){
		if(s[i] == ',')
			s[i] = ' ';
		cout << s[i];
	}
	return 0;
}

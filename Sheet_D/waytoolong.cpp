#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int t;
	cin >> t;
	cin.ignore(32767,'\n');
	for(short int i=0; i<t; i++)
	{
		string s;
		getline(cin, s);
		short int l = s.length();
		if(l <=10)
			cout<<s<<"\n";
		else{
			cout<<s[0]<<l-2<<s[l-1]<<"\n";
		}
	}
	return 0;
}

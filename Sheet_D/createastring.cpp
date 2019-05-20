#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	s1.append(" ");
	cout<<s1+s2;
	return 0;
} 

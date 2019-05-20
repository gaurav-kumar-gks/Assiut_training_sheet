#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a;
	getline(cin, a);
	
	for(int i=a.begin(); i<a.end(); i++);
	{
		if(a[i] == '\\'){
			break;
		}
		cout<<a[i];
	}

	
	return 0;
}

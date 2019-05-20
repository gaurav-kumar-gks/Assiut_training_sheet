#include <bits/stdc++.h>
using namespace std;

int main(){


	short int t;
	cin>>t;
	cin.ignore(32767,'\n');
	while(t--){
		string a, b, c;
		cin >> a;
		cin>> b;
		short int l1 = a.length();
		short int l2 = b.length();
		
		if (l2<l1){
			short int i;
			for(i=0; i<l2; i++){
				c+=a[i];
				c+=b[i];
			}
			for(short int j=i; j<l1; j++)
				c+=a[j]; 
		}
		else{
			short int i;
			for(i=0; i<l1; i++){
				c+=a[i];
				c+=b[i];
			}
			for(short int j=i; j<l2; j++)
				c+=b[j];
		}
		cout<<c<<"\n";
	}
	return 0;
}


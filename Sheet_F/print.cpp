#include <bits/stdc++.h>
using namespace std;

void print(int x){
	for(short int i=1; i<=x; i++){
		if(i!=x)
			cout<<i<<" ";
		else
			cout<<i;
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	short int x;
	cin >> x;
	print(x);
	return 0;
}

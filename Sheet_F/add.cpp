#include <bits/stdc++.h>
using namespace std;

int add(int x, int Y);

int main(){
	int x, y;
	cin >> x >> y;
	int sum  = add(x, y);
	cout << sum << endl;
	return 0;
}

int add(int x, int y){
	return x+y;
}

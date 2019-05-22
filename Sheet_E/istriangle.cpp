#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, z;
	cin >> x >> y >> z;
	
	if((x+y > z) && (y+z > x) && (z+x > y))
		cout << "Valid"<<endl;
	else
		cout << "Invalid"<<endl;
	return 0;
}

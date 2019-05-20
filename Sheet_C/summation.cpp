#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a;
	long long sum=0;
	cin >> n;

	while(n--){	
		cin >> a;
		sum += a;
	}
	cout<<abs(sum);
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x, y;	
	cin >> x >> y;
	swap(&x, &y);
	cout << x << " "<< y <<endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	short int n, x, y, sum;
	cin >> n;
	while(n--){
		sum = 0;
		cin >> x >> y;
		while(y>0){
			if(x%2 != 0){
				sum+=x;
				--y;
			}
			++x;
		}
		cout<<sum<<"\n";
	}
	return 0;
}

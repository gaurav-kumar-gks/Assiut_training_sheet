#include <iostream>
using namespace std;

int main(){
	short int a, b, div=1;
	cin >> a >> b;
	if(a>b){
		a = a+b;
		b = a-b;
		a = a-b;
	}
	for(short int i=2; i<=a; i++){
		if((a%i == 0) && (b%i == 0)){
			div = i;
 		}
	}
	cout<<div;
	return 0;
}

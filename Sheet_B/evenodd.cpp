#include <iostream>
using namespace std;

int main()
{
	short int n, even=0, odd=0, pos=0, neg=0;
	int x;
	cin >> n;
	while(n>0)
	{
		cin >> x;
		
		if(x>0)
			++pos;
		else if (x<0)
			++neg;
		if(x%2==0)
			++even;
		else
			++odd;

		--n;
	}
	cout<<"Even: "<<even<<"\nOdd: "<<odd
		<<"\nPositive: "<<pos<<"\nNegative: "<<neg;
	return 0;
}
	

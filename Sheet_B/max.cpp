#include <iostream>
using namespace std;

int main()
{
	short int n;
	cin >> n;
	int max = 0, x;	
	while(n>0)
	{
		cin >> x;
		if(x > max)
			max = x;
		--n;
 	}
	cout<<max;
	return 0;
}

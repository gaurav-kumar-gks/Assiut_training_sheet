#include <iostream>
using namespace std;

int main()
{
	unsigned short int x, i;
	cin >> x;
	i = x / 1000;
	if(i%2 == 0)
		cout<<"EVEN";
	else
		cout<<"ODD";
}

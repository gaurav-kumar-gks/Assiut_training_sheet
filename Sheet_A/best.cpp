#include <iostream>
using namespace std;

int main()
{
	long long a, b, c, d, min;
	cin >> a >> b >> c >> d;
	min = (a<b)?((a<c)?((a<d)?a:d):((c<d)?c:d)):((b<c)?((b<d)?b:d):((c<d)?c:d));
	short int i=0;
	if(min == a)
		i++;
	if(min == b)
		i++;
	if(min == c)
		i++;	
	if(min == d)
		i++;
	if(i>1)
		cout<<"We are the best";
	else
	{
		if (min == a)
			cout<<"Amr";
		else if (min == b)
			cout<<"Waleed";
		else if (min == c)
			cout<<"Mustafa";
		else if (min == d)
			cout<<"Youssef";
	}
}
	

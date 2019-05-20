#include <iostream>
using namespace std;

int main()
{
	unsigned short int x, yrs, i, mon, day;
	cin >> x;
	
	if(x<30)
		cout<<"0 years\n0 months\n"<<x<<" days";
	else if(365>x>=30 && x%30 == 0)
		cout<<"0 years\n"<<x/30<<" months\n"<<"0 days";
	else if(365>x>=30 && x%30 != 0)
		cout<<"0 years\n"<<x/30<<" months\n"<<x%30<<" days";
	else if(x>=365 && x%365 == 0)
		cout<<x/365<<" years\n"<<"0 months\n"<<"0 days";
	else
	{
	
		yrs = x/365;
		i = x%365;
		mon = i/30;
		day = i%30;
		cout << yrs << " years\n" << mon << " months\n" << day << " days";
	}
}
 
	
	
	

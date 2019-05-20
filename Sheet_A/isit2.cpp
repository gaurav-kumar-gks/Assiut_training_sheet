#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
    char c, d;
    cin >> a >> c >> b >> d >> r;
    if((c == '+' && a+b == r) || (c == '-' && a-b == r) || (c == '*' && a*b == r) )
        cout<<"Yes";
    else if(c == '+')
		cout<<a+b;
	else if(c == '-')
		cout<<a-b;
	else if(c == '*')
		cout<<a*b;
        
}


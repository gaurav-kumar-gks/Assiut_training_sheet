#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	(a<b) ? ( (c>b) ? (cout<<a<<"\n"<<b<<"\n"<<c) : ( (c>a) ? (cout<<a<<"\n"<<c<<"\n"<<b):(cout<<c<<"\n"<<a<<"\n"<<b) ) ) : ( (c>a) ? (cout<<b<<"\n"<<a<<"\n"<<c) : ( (c>b) ? (cout<<b<<"\n"<<c<<"\n"<<a):(cout<<c<<"\n"<<b<<"\n"<<a) ) );
	cout << "\n\n" << a << "\n" << b << "\n" << c;
} 

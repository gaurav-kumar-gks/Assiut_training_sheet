#include <iostream>
using namespace std;

int main()
{
	short int n, i;
	cin>>n;
	if(n==1)
	{
		cout<<"-1";
		return 0;
	}
	for(i=2; i<=n; ++i)
	{
		if(i%2==0)
		{	
			cout<<i<<"\n";
		}
    }
	return 0;
}

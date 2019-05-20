#include <iostream>
using namespace std;

int main()
{
	int x;
	
	do
	{
		cin >> x;
		if(x == 1999)
		{
			cout << "Correct\n";
			break;
		}
		else
			cout << "Wrong\n";
		
		
	}while(1);

	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	unsigned short int x;
	double y;
	cin >> x >> y;
	
	switch(x)
	{
		case 1:	cout << "Total: R "<< fixed << setprecision(2) << y*4.0; break;
		case 2: cout << "Total: R "<< fixed << setprecision(2) << y*4.5; break;
		case 3: cout << "Total: R "<< fixed << setprecision(2) << y*5.0; break;
		case 4: cout << "Total: R "<< fixed << setprecision(2) << y*2.0; break;
		case 5: cout << "Total: R "<< fixed << setprecision(2) << y*1.5; break;
	}
}

			
		

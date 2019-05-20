#include <iostream>
using namespace std;

int main()
{
	float f;
	cin >> f;
	if (f<0 || f>100)
		cout<<"Fora de intervalo";
	else if (f>=0 && f<=25)
		cout<<"Intervalo [0,25]";
	else if (f>25 && f<=50)
		cout<<"Intervalo (25,50]";
	else if (f>50 && f<=75)
		cout<<"Intervalo (50,75]";
	else
		cout<<"Intervalo (75,100]";
}

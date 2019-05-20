#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if(x == 61)
		cout << "Art of computer programming";
	else if(x == 71)
		cout << "Introduction to algorithm";
	else if (x == 11)
		cout << "Competitive programming";
	else if (x == 29)
		cout << "Programming challenges";
	else
		cout << "Not found";
}

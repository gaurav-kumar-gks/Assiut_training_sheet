#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double r, a;
	cin >> r;
	a = 3.14159 * r * r;
	cout << "Area = " << fixed << setprecision(9) <<a;
}

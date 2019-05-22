#include <bits/stdc++.h>
using namespace std;

struct Point
{
	long double x;
	long double y;
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Point p1, p2;
	cin >> p1.x >> p1.y >> p2.x >> p2.y;
	
	long double diffx = abs(p2.x - p1.x);
	long double diffy = abs(p2.y - p1.y);
	long double b = diffy * diffy;
	long double a = diffx * diffx;
	long double distance = sqrt(a + b);
	cout << fixed << setprecision(9) << distance << endl;
	
	return 0;
}

#include <iostream>
using namespace std;
	
int main()
{
	short int n, m;
	char c;
	cin >> n >> c >> m;
	if((c == '>' && n>m) || (c == '<' && n<m) || (c == '=' && n == m) )
		cout<<"Right";
	else
		cout<<"Wrong";
}

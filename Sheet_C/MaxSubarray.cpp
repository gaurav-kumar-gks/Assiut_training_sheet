#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long A[100];
	int T, N, s = 0, x;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int j = 0; j < N; j++)
			cin >> A[j];
		for (int k = 0; k < N; k++)
		{
			cout << A[k]<<" ";
			s=A[k];
			for (int p = k+1; p <N; p++)
			{
				x = p;
                if (s < A[x])
                    s=A[p];
 
                cout<<s<<" ";
			}
		}
		cout << endl;
 
	}
}

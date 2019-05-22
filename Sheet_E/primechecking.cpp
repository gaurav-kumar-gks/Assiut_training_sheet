#include <bits/stdc++.h> 
using namespace std; 

bool isprime(long long int n) 
{  
	if (n <= 1) return 0; 
	if (n <= 3) return 1;  
	if (n%2 == 0 || n%3 == 0) return 0;; 
	int p = sqrt(n);
	for (int i=5; i<=p; i+=6) 
		if (n%i == 0 || n%(i+2) == 0) 
			return 0;

	return 1; 
} 

int main(){
    long long int n;
    cin >> n;
    if(isprime(n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

    return 0;
}


#include <bits/stdc++.h> 
using namespace std; 
 
long long int sumofFactors(long long int n) 
{ 
    long long int res = 1; 
    for (int i = 2; i <= sqrt(n); i++){ 
  		long long int curr_sum = 1; 
        long long int curr_term = 1; 
        while (n % i == 0) { 
            n = n / i; 
  			curr_term *= i; 
            curr_sum += curr_term; 
        } 
  		res *= curr_sum; 
    } 
    if (n >= 2) 
        res *= (1 + n); 
  
    return res; 
} 
 
int main() 
{ 
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n;
	cin >> n; 
    cout << sumofFactors(n); 
    return 0; 
} 

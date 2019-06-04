#include <bits/stdc++.h>
using namespace std;
string s;

int check_odd(int x){
	if(x%2 == 0)
		return 0;
	else 
		return 1;
}

void binary(int x){
	if(x == 1){
        s.append("1");
        return;
    }
    else if(x == 0){
        s.append("0");
        return;
    }
    else if(x>1){
    	binary(x/2);
        binary(x%2);
    }
}

int check_palindrome(void){
	string y = s;
	reverse(y.begin(), y.end());
	if(s.compare(y) == 0)
		return 1;
	else
		return 0;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	cin >> x;
	binary(x);
	if(check_odd(x) && check_palindrome())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

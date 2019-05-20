#include <iostream>
using namespace std;

int main()
{
        char c, a;
        cin >> c;
        if(97 <= c)
                a = c - 32;
        else
                a = c + 32;
        cout<<a;
}

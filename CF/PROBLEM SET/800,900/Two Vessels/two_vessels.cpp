// Q : https://codeforces.com/problemset/problem/1872/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }

        cout << (a-b+(2*c)-1)/(2*c) << endl;
    }
    
    return 0;
}
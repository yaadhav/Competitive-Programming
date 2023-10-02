// https://codeforces.com/contest/1294/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;

        ll check = n+a+b+c;
        ll max=a;
        if( b>a )
            max=b;
        if( c>max )
            max=c;

        if( check%3==0 && max<=check/3 )
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
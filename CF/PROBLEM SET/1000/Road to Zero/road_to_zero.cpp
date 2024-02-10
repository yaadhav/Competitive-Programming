// Q : https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        if( x>y )
        {
            x+=y;
            y=x-y;
            x-=y;
        }

        ll min = x*b + (y-x)*a ;
        if( (x+y)*a<min )
            min = (x+y)*a ;

        cout << min << endl;

    }
    
    return 0;
}
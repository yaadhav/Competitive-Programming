// Q : https://www.codechef.com/problems/GCDLM

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd( ll a, ll b)
{
    if( a%b==0 )
        return b;
    else
        return gcd( b, a%b);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        for( ll i=1; i<=k && x!=y; i+=2 )
        {
            if( x>y )
                x=gcd(x,y);
            else
                y=gcd(x,y);
        }

        cout << x+y << endl;
    }

    return 0;
}
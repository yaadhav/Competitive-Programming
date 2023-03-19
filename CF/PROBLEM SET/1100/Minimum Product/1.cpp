// Q : https://codeforces.com/problemset/problem/1409/B

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void Swap( ll &a, ll &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        if( a-x>=b-y )
        {
            Swap( a, b);
            Swap( x, y);
        }

        ll d=a-x+b-y-n;

        if( d>0 )
        {
            y+=d;
            if( y>b )
            {
                d=y-b;
                y=b;
                x+=d;
            }
        }

        cout << "ans" << x*y << endl;    
    }
    return 0;
}
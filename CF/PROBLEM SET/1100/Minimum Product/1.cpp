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

        if( a>b )
        {
            Swap( a, b);
            Swap( x, y);
        }

        if( a==b )
        {
            if( x>y )
            Swap( x, y);
        }

        a-=n;
        if( a<x && b-(a+n)>n )
        {
            n=x-a;
            a=x;
            b = b-n<y ? y:b-n ;
        }
        else if( a<x && b-(a+n)<=n )
        {
            a+=n;
            b-=n;

            if( b<y )
            {
                n=x-a;
                a=x;
                b = b-n<y ? y:b-n ;
            }
        }

        a = a<0 ? 0:a;
        b = b<0 ? 0:b;

        cout << a*b << endl;    
    }
    return 0;
}
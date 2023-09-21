// Q : https://codeforces.com/contest/1873/problem/C

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        char x;
        ll points=0;
        for( int i=1; i<=10; i++)
        {
            for( int j=1; j<=10; j++)
            {
                cin >> x;
                if( x=='X' )
                {
                    ll a = i>5 ? 11-i:i;
                    ll b = j>5 ? 11-j:j;
                    if( a>b )
                        a=b;
                    points+=a;
                }
            }
        }

        cout << points << endl;
    }

    return 0;
}
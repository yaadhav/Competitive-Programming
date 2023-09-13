// Q : https://www.codechef.com/problems/PRIMEPERM

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        if( n<=3 )
        {
            cout << -1 << endl;
            continue;
        }

        ll l=(n/4);

        if( n%4!=0 )
            l--;

        for( ll i=1; i<=4*l; i++ )
        {
            if( i%4==1 || i%4==2 )
                cout << i+2 << " ";
            else
                cout << i-2 << " ";
        }

        if( n%4==1 || n%4==3 )
        {
        cout << n-1 << " " << n << " ";
        for( int i=(4*l)+1; i<n-1; i++)
            cout << i << " ";
        }
        else if( n%4==2 )
        {
            cout << n-2 << " " << n-1 << " " << n << " ";
            for( int i=(4*l)+1; i<n-2; i++)
                cout << i << " ";
        }

        cout << endl;        
    }

    return 0;
}
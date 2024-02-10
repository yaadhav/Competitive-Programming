// Q : https://www.codechef.com/problems/SRTO3

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        ll b, max=0;

        for( ll &i: a )
            cin >> i;
        for( ll i=0; i<m; i++ )
        {
            cin >> b;

            if( b>m )
                max=b;
        }

        sort( a.begin()+(n-max), a.end());


        for( int i: a )
            cout << i << " ";
        cout << endl; 
    }   

    return 0;
}
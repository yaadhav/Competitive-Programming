// Q : https://www.codechef.com/problems/NPRPE

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> p(n);

        for( ll &i: p )
            cin >> i;

        if( n<=2 )
        {
            cout << -1  << endl;
            continue;
        } 

        for( int i=0; i<n; i++)
        {
            if( p[i]==1 )
                cout << 3 << " ";
            else if( p[i]==3 )
                cout << 1 << " ";
            else
                cout << p[i] << " ";
        }

        cout << endl;
    }   

    return 0;
}
// Q : https://www.codechef.com/problems/WARRIORCHEF

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, h;
        cin >> n >> h;

        vector<ll> a(n);
        ll sum=0;
        for( ll &i: a)
        {
            cin >> i;
            sum+=i;
        }

        sort( a.begin(), a.end());

        if( h>sum )
        {
            cout << 0 << endl;
            continue;
        }

        for( int i=0; i<n; i++)
        {
            sum-=a[i];
            if( h>sum )
            {
                cout << a[i] << endl;
                break;
            }
        }
    }

    return 0;
}
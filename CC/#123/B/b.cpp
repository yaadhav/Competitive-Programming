#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        ll sum=0;
        for( ll &i: a)
        {
            cin >> i;
            sum+=(2*i);
        }

        vector<vector<ll>> check;
        for( ll i=0; i<n; i++)
        {
            for( ll j=i+1; j<n; j++)
            {
                check.push_back( {sum-a[i]-a[j], i, j});
            }
        }


        while(q--)
        {
            ll x;
            cin >> x;

            ll ans=-1, i, j;
            for( auto c: check)
            {
                if( c[0]==x )
                {
                    ans=1;
                    i=c[1];
                    j=c[2];
                    break;
                }
            }

            if( ans==-1 )
            {
                cout << -1 << endl;
                continue;
            }

            cout << a[i] << " ";
            for( ll k=0; k<n; k++)
            {
                if( k==i || k==j)
                    continue;
                else
                    cout << a[k] << " ";
            }
            cout << a[j] << endl;
        }

    }
    return 0;

}


#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd( ll a, ll b) {
    if( a%b==0 )
        return b;
    else
        return gcd( b, a%b);
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for( auto &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        set<ll> lcms;

        for( ll i=0; i<n; i++) {
            for( ll j=i+1; j<n; j++) {
                ll lcm=a[i]*a[j]/gcd( a[j], a[i]);
                lcms.insert(lcm);
            }
        }

        ll ans=0;
        for( auto l: lcms) {
            ll len=0;
            for( ll i=0; i<n; i++) {
                if( l==a[i] ) {
                    len=0;
                    break;
                }
                else if( l<a[i] ) break;
                
                if( l%a[i]==0 )
                    len++;
            }

            ans=max( ans, len);
        }

        cout << ans << endl;
    }   

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n; 
        cin >> n;

        vector<ll> a(n);
        for( auto &i: a) cin >> i;

        vector<ll> dp(n);

        for( ll i=1; i<n; i++) {
            ll minn=INT_MAX;
            for( ll j=0; j<i; j++) {
                ll c=dp[j]+(max( a[i], a[j])*(i-j));
                minn=min( minn, c);
            }
            dp[i]=minn;
        }

        cout << dp[n-1] << endl;
    }

    return 0;

}


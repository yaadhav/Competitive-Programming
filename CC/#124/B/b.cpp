// https://www.codechef.com/problems/STRONGTABLE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for( ll &i: a)
            cin >> i;

        sort( a.rbegin(), a.rend());

        ll ans=0;
        for( ll i=0; i<4 && i<n; i++)
        {
            if( a[i]*(i+1) > ans )
                ans = a[i]*(i+1);
        }

        cout << ans << endl;
    }

    return 0;

}


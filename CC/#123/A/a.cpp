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

        sort( a.begin(), a.end());

        ll ans=a[0]+a[1];
        for( ll i=2; i<n; i++)
            ans+=(2*a[i]);

        cout << ans << endl;

    }
    return 0;

}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n; cin >> n;

        vector<int> a(n);
        for( auto &i: a) cin >> i;

        ll q; cin >> q;

        while(q--) {
            
            ll k; cin >> k;
            
            sort( a.begin(), a.begin()+k);

            ll ans=0;
            for( ll i=k/2; i<k; i++)
                ans+=a[i];
            for( ll i=0; i<k/2; i++) 
                ans-=a[i];

            cout << ans << endl;
        }
    }

    return 0;

}


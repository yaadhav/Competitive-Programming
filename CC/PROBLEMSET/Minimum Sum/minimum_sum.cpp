#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd( ll a, ll b)
{
    if( a%b==0 )
        return b;
    else
        return gcd( b, a%b);
}

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

        ll ans=a[0];
        for( ll i=1; i<n; i++)
            ans=gcd( a[i], ans);

        cout << ans*n << endl;        
    }

    return 0;

}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
    ll n, x;
    cin >> n >> x;

    vector<ll> p(n);
    for( ll &i: p)
        cin >> i;

    sort( p.begin(), p.end());

    ll ans=0;
    for( ll i=0, j=n-1; i<=j; j--)
    {
        if( p[i]+p[j]<=x && i!=j)
            i++;
        ans++;
    }

    cout << ans << endl;

    return 0;

}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
    ll n;
    cin >> n;

    vector<ll> a(n);

    for( ll &i : a)
        cin >> i;

    sort( a.begin(), a.end());

    ll ans=1;
    for( ll i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
            ans++;
    }

    cout << ans << endl;

    return 0;

}


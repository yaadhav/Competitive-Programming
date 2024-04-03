#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
    ll n;
    cin >> n;

    vector<pair<ll,ll>> p;
    ll a, b;

    for( ll i=0; i<n; i++)
    {
        cin >> a >> b;
        p.push_back({a, 1});
        p.push_back({b, -1});
    }

    sort( p.begin(), p.end());

    ll curr=0, ans=0;
    for( auto i: p)
    {
        curr+=i.second;
        ans=max(ans,curr);
    }

    cout << ans << endl;

    return 0;

}


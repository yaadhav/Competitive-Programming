#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
    ll n;
    cin >> n;

    vector<pair<ll,ll>> m, p;
    ll a, b;
    for( ll i=0; i<n; i++)
    {
        cin >> a >> b;
        m.push_back({a,b});
    }

    sort( m.begin(), m.end());

    for( ll i=0; i<n; i++)
    {
        p.push_back({m[i].first, n+1});
        p.push_back({m[i].second, i+1});
    }

    sort( p.begin(), p.end());

    ll curr=0, last=1, ans=0;
    for( auto i: p)
    {
        if (i.second==n+1)
            curr++;
        else if(i.second>=last)
        {
            ans++;
            last=curr+1;
        }
    }

    cout << ans << endl;

    return 0;

}


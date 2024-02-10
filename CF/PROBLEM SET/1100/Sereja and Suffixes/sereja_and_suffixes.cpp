// Q : https://codeforces.com/contest/368/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{ 
    ll n, m;
    cin >> n >> m;

    vector<pair<ll,ll>> a(n);

    for( auto &i : a)
        cin >> i.first;

    set<ll> check;
    for( ll i=n-1; i>=0; i--)
    {
        check.insert(a[i].first);
        a[i].second=check.size();
    }

    while(m--)
    {
        ll l;
        cin >> l;

        cout << a[l-1].second << endl; 
    }

    return 0;
}
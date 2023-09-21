// Q : https://codeforces.com/contest/1873/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
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
        a[0]++;

        ll ans=1;
        for( int i:a)
            ans*=i;

        cout << ans << endl;  
    }

    return 0;
}
// Q : https://www.codechef.com/problems/MEXARR

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n ;

        vector<ll> a(n);
        for( ll &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        ll ans=0;
        for( ll i=0; i<n; i++)
            ans+=abs(a[i]-i);

        cout << ans << endl;
    }

    return 0;

}


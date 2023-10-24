#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for( ll &i: a)
            cin >> i;

        sort( a.rbegin(), a.rend());

        ll sum=0, ans=0;
        for( ll i=0; i<n; i++)
        {
            sum+=a[i];
            if( (sum/(i+1))<x )
                break;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
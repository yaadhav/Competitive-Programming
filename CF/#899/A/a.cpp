// Q : https://codeforces.com/contest/1882/problem/A

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

        ll ans=0;
        for( ll i=0; i<n; i++)
        {
            ans++;
            if( ans==a[i] )
                ans++;
        }

        cout << ans << endl;
    }
 
    return 0;
}
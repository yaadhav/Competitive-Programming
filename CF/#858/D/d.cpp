// Q : https://codeforces.com/contest/1807/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a;
        ll temp, sum=0;

        a.push_back(sum);
        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            sum+=temp;
            a.push_back(sum);            
        }

        while(q--)
        {
            ll l, r, k;
            cin >> l >> r >> k ;

            ll in_sum=k*(r-l+1), out_sum=a[r]-a[l-1];
            string ans="YES";

            if( (sum+in_sum-out_sum)%2==0 )
                ans="NO";
            
            cout << ans << endl;
        }
    } 
    
    return 0;
}

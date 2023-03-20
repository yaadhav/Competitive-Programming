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
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);            
        }

        ll SUM=accumulate( a.begin(), a.end(), 0);

        while(q--)
        {
            ll l, r, k;
            cin >> l >> r >> k ;

            vector<ll> b=a;
            string ans="YES";

            ll in_sum=k*(r-l+1), out_sum=0;
            
            for( ll i=l-1; i<r; i++)
                out_sum+=b[i];

            if( (SUM+in_sum-out_sum)%2==0 )
                ans="NO";
            
            cout << ans << endl;
        }
    } 
    
    return 0;
}

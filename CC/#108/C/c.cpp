// Q : https://www.codechef.com/problems/CLANEXPNSN

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

        vector<vector<ll>> c(n);
        ll a;
        for( ll i=0; i<n; i++)
        {
            cin >> a;
            c[a-1].push_back(i);
        }

        ll min=INT64_MAX, ans=INT64_MAX, check=0;
        for( vector<ll> num: c)
        {
            check++;
            if( num.size()==0 )
                continue;

            ll max=0, curr; 
            for( ll i=0; i<num.size()-1; i++)
            {
                curr=(num[i+1]-num[i])/2;
                if( curr>max )
                    max=curr;                 
            }

            if( num[0]>max )
                max=num[0];
            if( n-1-num.back()>max )
                max=n-1-num.back();
            
            if( max<min )
            {
                ans=check;
                min=max;
            }
        }

        cout << ans << " " << min << endl;
    }   

    return 0;
}
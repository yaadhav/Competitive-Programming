// Q : https://www.codechef.com/problems/FIZZBUZZ2304

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll,ll>> a;
        ll temp, z=0;
        for( ll i=0; i<n; i++)
        {
            cin >> temp;

            if(temp%2)
            {
                ll x=max(z,i-k+1);
                ll y=min(n-k,i);
                a.push_back({x,-1});
                a.push_back({y,1});
            }
        }

        if( a.size()==0 )
        {
            cout << 0 << endl;
            continue;
        }

        sort( a.begin(), a.end());

        ll ans=0, x=a[0].first, count=0;
        for( ll i=0; i<a.size(); i++)
        {
            if( count==0 )
                x=a[i].first;
            if( count==-1 && a[i].second==1 )
                ans+=a[i].first-x+1;
            count+=a[i].second;
        }

        cout << ans << endl;        
    }   

    return 0;
}
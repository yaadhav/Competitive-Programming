// Q : https://www.codechef.com/problems/DISJOINTSUB

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
        string ans="Yes";
        cin >> n ;

        vector<ll> a(n);
        for( ll &i: a)
            cin >> i;


        vector<pair<ll,ll>> b;
        ll min=a[0], x=0;
        for( ll i=1; i<n; i++)
        {
            if( min<=a[i] )
                min=a[i];
            else
            {
                if( b.size() ) {
                if( b.back().first>a[i] )
                {
                    ans="No";
                    break;
                } 
                if( b.back().second==i-1 )
                {
                    ans="No";
                    break;
                } 
                }

                x = max( x, min-a[i]);
                b.push_back({a[i],i});
            }
        }

        for( ll i=0; i<b.size(); i++)
            a[b[i].second]+=x;

        for( ll i=1; i<n && ans=="Yes"; i++)
        {
            if( a[i-1]>a[i] )
                ans="No";
        }

        cout << ans << endl;
    }

    return 0;
}


// Q : https://codeforces.com/contest/1873/problem/E

#include<bits/stdc++.h>
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

        sort( a.begin(), a.end() );

        ll i, q=0, ans=0, flag=0;
        for( i=1; i<n; i++)
        {
            q+=(a[i]-a[i-1])*(i);

            if( q>x )
            {
                ans=a[i-1];
                if( a[i]-a[i-1]>1 ) 
                    flag=1;
                break;
            }
        }

        if(!ans)
            cout << ((x-q)/a.size())+a[n-1] << endl;
        else if(flag)
        {
            q-=(a[i]-a[i-1])*(i);
            cout << ((x-q)/i)+a[i-1] << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}
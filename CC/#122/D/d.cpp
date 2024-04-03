// Q : https://www.codechef.com/problems/MATMOD

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
ll mod=1000000007;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<vector<ll>> a;
        ll mn = n*(n+1)/2;

        for( ll i=0; i<n; i++)
        {
            vector<ll> row(n);
            for( ll &j: row)
                cin >> j;
            a.push_back(row);
        } 

        vector<ll> check;
        ull ans=1, combs1=0, combs2=0;
        for( ll i=0; i<n && ans; i++)
        {
            for( ll j=i+1; j<n && ans; j++)
            {
                if( a[i][j] && a[j][i] )
                {
                    if( abs(a[i][j]-a[j][i])!=mn )
                        ans=0;
                    if( a[i][j]>n*n-mn && a[i][j]<mn+1 )
                        ans=0;
                    if( a[j][i]>n*n-mn && a[j][i]<mn+1 )
                        ans=0;
                }
                else if( a[i][j] || a[j][i] )
                {
                    ll x = a[i][j]+a[j][i];
                    ll y = x+mn>n*n ? x-mn:x+mn ;
                    check.push_back(x);
                    check.push_back(y);
                }
                else
                    combs1++;
            }
        }

        if( check.size() ) {
            sort( check.begin(), check.end());

            for( ll i=0; i<check.size()-1 && ans; i++)
            {
                if( check[i]==check[i+1])
                    ans=0;
            }
        }

        for( ll i=0; i<n && ans; i++)
        {
            if( a[i][i]==0 )
                combs2++;
            else
            {
                if( a[i][i]<=n*n-mn || a[i][i]>=mn+1 )
                    ans=0;
            }
        }

        if( !ans )
        {
            cout << 0 << endl;
            continue;
        }

        for( ll i=combs1*2; i>1; i-=2)
            ans=(ans*i)%mod;
        for( ll i=combs2; i>1; i--)
            ans=(ans*i)%mod;

        cout << ans%mod << endl;
     
    }
    return 0;

}

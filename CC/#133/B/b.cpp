// Q : https://www.codechef.com/problems/POWPM

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
        cin >> n;

        vector<ll> a(n);

        for( ll &i: a)
            cin >> i;

        ll ans=0;
        for( ll i=0; i<n; i++) 
        {
            for( ll j=0; j<n; j++) {
                if( pow( a[i], j+1)<=a[j] )
                    ans++;
            }
        }    
        
        cout << ans <<  endl;
    }

    return 0;

}


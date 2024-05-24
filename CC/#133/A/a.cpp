// Q : https://www.codechef.com/problems/MXALT

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
        cin >> n ;

        vector<ll> a(n);

        for( ll &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        ll ans=0;
        for( int i=0; i<n/2; i++)
            ans-=a[i];
        for( int i=n/2; i<n; i++)
            ans+=a[i];


        cout << ans << endl;

    }

    return 0;

}


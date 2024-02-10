#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;

        ll ans=(n*(n+1))/2;

        for( int i=1; i<=n; i*=2)
            ans-=(2*i);

        cout << ans << endl;        
    }
    
    return 0;
}
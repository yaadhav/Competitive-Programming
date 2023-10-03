#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, x;
    cin >> n >> x;

    ll ans=0;
    for( ll i=1; i<sqrt(x) && i<=n; i++)
    {
        if( x%i==0 && x/i<=n )
            ans+=2 ;
    }

    int sq_x=sqrt(x);
    if( x==pow(sq_x, 2) && sq_x<=n )
        ans++;
    
    cout << ans << endl;

    return 0;
}
// Q : https://www.codechef.com/problems/BRUNCH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;

        ll ans=x/y;

        if( ans>20 )
            ans=20;

        cout << ans << endl;    
    }

    return 0;
}
// Q : https://www.codechef.com/problems/SPCP2

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, n;
        cin >> x >> n;

        ll ans=((n+99)/100)-x;

        if( ans<0)
            ans=0;

        cout << ans << endl;
    }   

    return 0;
}
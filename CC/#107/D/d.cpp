// Q : https://www.codechef.com/problems/MAXIMALEXP

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
        
        if( k>=n )
        {
            cout << n/2 << endl;
            continue;
        }

        ll check=k+n%k;
        ll ans=check/2;
        if( check%2==1 )
        {
            if( ans%k==0 || (ans+1)%k==0 )
                ans/=2;
        }

        cout << ans << endl;
    }   

    return 0;
}
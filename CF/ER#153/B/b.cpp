#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        ll d=m/k, ans=0;
        
        if( a1>=m%k )
        {
            a1-=m%k;
            ans=d-ak-a1/k;
        }
        else
        {
            ans=m%k-a1;
            ans+=d-ak;
        }

        if( ans<0)
            ans=0;

        cout << ans << endl;
    }
    
    return 0;
}


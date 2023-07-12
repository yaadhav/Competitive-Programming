// Q : https://www.codechef.com/problems/BLDST

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        ll sum=0, temp;
        for( ll i=0; i<m; i++)
        {
            cin >> temp;
            sum+=temp;
        }

        ll ans = sum-((m-1)*n) ;

        if(ans<0)
            ans=0;
        
        cout << ans << endl;
    }

    return 0;
}
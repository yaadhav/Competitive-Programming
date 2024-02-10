// Q : https://www.codechef.com/problems/JOINSTATE

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        ll sum=0, ans=0, inp;
        for( ll i=1; i<=n; i++)
        {
            cin >> inp;
            sum+=i;

            if( sum>=i*m )
                ans++;            
        }

        cout << ans << endl;
    }   

    return 0;
}
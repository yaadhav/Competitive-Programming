// Q : https://www.codechef.com/problems/AWESUM_OR

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

ll fact( ll n )
{
    ll f=1;
    for( ll i=2; i<=n; i++)
        f=f*i;
    
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {   
        ll n;
        cin >> n;

        ll sum=3, count=2;
        for( ll i=4; sum<n; i*=2 )
        {
            sum+=i;
            count++;
        }
        
        ll ans=3*(count-1);
        if( sum==n )
            cout << fact(ans) << endl;
        else
            cout << 0 << endl ;
    } 
    
    return 0;
}


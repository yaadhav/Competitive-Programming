// Q : https://codeforces.com/contest/1879/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        ll suma=0, sumb=0;
        for( ll &i: a)
        {
            cin >> i;      
            suma+=i;
        }   
        for( ll &i: b)
        {
            cin >> i;
            sumb+=i;
        }

        sort( a.begin(), a.end());    
        sort( b.begin(), b.end());   

        ll ans1=suma+(b[0]*n) ;
        ll ans2=sumb+(a[0]*n) ;

        if( ans1>ans2)
            ans1=ans2;
        
        cout << ans1 << endl;
    }

    return 0;
}
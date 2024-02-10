// Q : https://codeforces.com/problemset/problem/1353/C

#include <bits/stdc++.h>
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

        ll ans=0;
        for( int i=3; i<=n; i+=2)
            ans+=2*(pow(i-1,2));

        cout << ans << endl;        
    }
    
    return 0;
}

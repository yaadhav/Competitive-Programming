// Q : https://codeforces.com/contest/1809/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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

        ll ans=sqrt(n);

        if( ans*ans==n )
            ans--;

        cout << ans << endl;
    } 
    
    return 0;
}


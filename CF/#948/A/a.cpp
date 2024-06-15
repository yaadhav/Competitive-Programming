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

        string ans="No";

        if( m<=n && m%2==n%2 )
            ans="Yes";

        cout << ans << endl;
    }

    return 0;
}
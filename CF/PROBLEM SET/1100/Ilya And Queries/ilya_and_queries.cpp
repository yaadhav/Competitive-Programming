#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll m;
    string s;
    cin >> s >> m;

    while(m--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans=0;
        for( ll i=l; i<r; i++)
        {
            if( s[i-1]==s[i] )
                ans++;
        }

        cout << ans << endl;
    }



    return 0;
}
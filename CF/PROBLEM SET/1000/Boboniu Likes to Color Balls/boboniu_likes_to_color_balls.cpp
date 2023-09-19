// Q : https://codeforces.com/problemset/problem/1395/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        vector<ll> c(3);
        ll w, odd=0;    

        for( ll &i: c)
        {
            cin >> i;
            odd+=i%2;
        }
        cin >> w;

        string ans="No";

        if( odd+w%2<=1 )
            ans="Yes";

        if( c[0]>=1 && c[1]>=1 && c[2]>=1 )
        {
            odd=3-odd;
            w+=3;

            if( odd+w%2<=1 )
            ans="Yes";
        }

        cout << ans << endl;   
    }

    return 0;
}
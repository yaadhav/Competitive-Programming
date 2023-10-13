// Q : https://codeforces.com/contest/1881/problem/C

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

        char a[n][n];

        for( ll i=0; i<n; i++)
        {
            for( ll j=0; j<n; j++)
                cin >> a[i][j];
        }

        ll ans=0;
        for( ll i=0; i<n/2; i++)
        {
            for( ll j=i; j<n-1-i; j++)
            {
                vector<char> check={a[i][j], a[j][n-1-i], a[n-1-i][n-1-j], a[n-1-j][i]};
                 
                sort( check.rbegin(), check.rend());

                for( char k: check)
                    ans+=int(check[0])-int(k);
            }
        }

        cout << ans << endl;

    }

    return 0;
}
// Q : https://codeforces.com/contest/1881/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        vector<ll> a(3);

        for( ll &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        if( a[1]%a[0]==0 && a[2]%a[0]==0 )
        {
            ll check=(a[1]/a[0])+(a[2]/a[0])-2;

            if( check<=3 )
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
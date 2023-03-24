// Q : https://codeforces.com/problemset/problem/1409/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a, b;
        ll temp, amin=1, bmin=1;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            if( i%2==0 )
            {
                a.push_back(temp);
                if( amin>temp )
                    amin=temp;
            }
            else
            {
                b.push_back(temp);
                if( bmin>temp )
                    bmin=temp;
            }
        } 
    }
    return 0;
}
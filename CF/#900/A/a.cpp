// Q : https://codeforces.com/contest/1878/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll temp;
        string ans="NO";
        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            if( temp==k )
                ans="YES";
        }
        
        cout << ans << endl;
    }

    return 0;
}
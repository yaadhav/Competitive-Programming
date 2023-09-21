// Q : https://codeforces.com/contest/1873/problem/D

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
        string s;
        cin >> n >> k >> s;

        vector<ll> b;
        for( int i=0; i<n; i++)
        {
            if( s[i]=='B' )
                b.push_back(i);
        }

        if( b.size()==0 )
        {
            cout << 0 << endl;
            continue;
        }

        ll start=b[0], ans=0;
        for( int i=0; i<b.size(); i++)
        {
            while( b[i]<=start+k-1 && i<b.size() )
                i++;
            start=b[i];
            i--;
            ans++;        
        }

        cout << ans << endl;        
    }

    return 0;
}
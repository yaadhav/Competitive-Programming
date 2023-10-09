#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string s;
        ll pos;
        cin >> s >> pos;

        ll n=s.length(), r;

        for( r=1; n<pos; r++ )
            n+=n-r;

        cout << n << " " << r << endl;

        vector<pair<char,ll>> c;
        for( ll i=0; i<s.length(); i++)
            c.push_back({s[i],i+1});

        sort( c.rbegin(), c.rend());

        for( auto i : c)
            cout << i.first << " " << i.second << endl;


    }

    return 0;
}
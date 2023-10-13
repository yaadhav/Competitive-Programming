// Q : https://codeforces.com/contest/1881/problem/A

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
        string x, s;
        cin >> n >> m >> x >> s;

        ll i=0;
        if( x.find(s)>=0 && x.find(s)<x.length() )
        {
            cout << i << endl;
            continue;
        }

        for( i=1; true; i++)
        {
            x+=x;
            bool check = x.find(s)>=0 && x.find(s)<x.length();
            if( check )
            {
                cout << i << endl;
                break;
            }
            if( i>4 && !check )
            {
                cout << -1 << endl;
                break;
            }
        }
    }

    return 0;
}
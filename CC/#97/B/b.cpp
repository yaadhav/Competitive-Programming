// Q : https://www.codechef.com/problems/CAESAR

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        string s, t, u, v="";
        cin >> n >> s >> t >> u ;

        ll d=int(t[0])-int(s[0]);

        if(d<0)
            d+=26;

        for( int i=0; i<n; i++)
        {
            ll a=int(u[i])+d;
            if(a>122)
                a-=26;
            cout << char(a);
        }
        cout << endl;                  
    }
    return 0;
}
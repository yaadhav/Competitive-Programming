// Q : https://www.codechef.com/problems/DICENUM

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        vector<ll> a, b;
        ll temp;
        for( ll i=0; i<3; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for( ll i=0; i<3; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort( a.rbegin(), a.rend());
        sort( b.rbegin(), b.rend());

        string ans="";
        for( ll i=0; i<3; i++)
        {
            if( a[i]>b[i] )
            {
                ans="Alice";
                break;
            }
            else if( a[i]<b[i] )
            {
                ans="Bob";
                break;
            }
        }

        if( ans=="" )
            ans="Tie";

        cout << ans << endl;
    }

    return 0;
}
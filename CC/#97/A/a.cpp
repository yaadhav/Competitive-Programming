// Q : https://www.codechef.com/problems/DICEGAME2

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

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

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if( a[1]+a[2]>b[1]+b[2] )
            cout << "Alice" << endl;
        else if( a[1]+a[2]<b[1]+b[2] )
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;

    }
    return 0;
}
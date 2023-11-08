// Q : https://www.codechef.com/problems/ASSIGNMNT

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;

        if( x*y<= z*24*60 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// Q : https://www.codechef.com/problems/FINDK3

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        vector<ll> a;
        ll temp;

        for( ll i=0; i<3; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        sort( a.begin(), a.end());

        if( a[1]%a[0]==0 || a[2]%a[0]==0 )
            cout << a[1]*a[2] << " " << a[0] << endl;
        else if( a[2]%a[1]==0 )
            cout << a[0]*a[2] << " " << a[1] << endl;
        else if( (a[1]*a[0])%a[2]==0 )
            cout << a[0]*a[1] << " " << a[2] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
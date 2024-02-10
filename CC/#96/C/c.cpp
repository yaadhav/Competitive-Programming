// Q : https://www.codechef.com/START96C/problems/REMOVEMUL

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        ll temp, qsum=0;

        for( ll i=0; i<m; i++)
        {
            cin >> temp;
            qsum+=temp;
        }

        ll total=(n*(n+1))/2;

        cout << total-qsum << endl;
    }
    return 0;
}


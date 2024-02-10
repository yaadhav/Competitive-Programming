// Q : https://www.codechef.com/problems/MOONSOON

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> a, b;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for( ll i=0; i<m; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());

        ll add, total=0;
        for( ll i=0; i<n && i<m; i++)
        {
            add=a[i];
            if( b[i]*h<add )
                add=b[i]*h;
            
            total+=add;
        }

        cout  << total << endl;
    }
    return 0;
}


// Q : https://codeforces.com/problemset/problem/1607/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<int> a(n);

        for( int &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        ll max=a[0], sub=a[0];

        for( int i=1; i<n; i++)
        {
            if( a[i]-sub>max )
                max=a[i]-sub;
            sub+=a[i]-sub;
        }

        cout << max << endl;

    }
    
    return 0;
}
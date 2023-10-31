// Q : https://codeforces.com/problemset/problem/1365/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        set<ll> ic, jc;

        for( ll i=0; i<n; i++)
        {
            for( ll j=0; j<m; j++)
            {
                int temp;
                cin >> temp;

                if( temp==1 )
                {
                    ic.insert(i);
                    jc.insert(j);
                }
            }
        }

        ll ans=min( n-ic.size(), m-jc.size());

        if(ans%2)
            cout<< "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }

    return 0;
}
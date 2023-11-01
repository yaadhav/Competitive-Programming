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

        set<ll> i_check, j_check;

        for( ll i=0; i<n; i++)
        {
            for( ll j=0; j<m; j++)
            {
                int temp;
                cin >> temp;

                if( temp==1 )
                {
                    i_check.insert(i);
                    j_check.insert(j);
                }
            }
        }

        ll ans=min( n-i_check.size(), m-j_check.size());

        if(ans%2)
            cout<< "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }

    return 0;
}
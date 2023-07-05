// Q : https://www.codechef.com/problems/TRIPLETMIN

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a, s;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        sort( a.begin(), a.end());

        ll sum;
        for( int i=1; i<n-1; i++)
        {
            sum=(i*(i+1))/2;
            s.push_back(sum);
        }

        sort( s.begin(), s.end(), greater<>());

        while(q--)
        {
            ll k;
            cin >> k;

            ll check=0;
            for( int i=0; k>check; i++)
            {
                check+=s[i];
                if(k<=check)
                    cout << a[i] << endl;
            }
        }
    }
    return 0;
}
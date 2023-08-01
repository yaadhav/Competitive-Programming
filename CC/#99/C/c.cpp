// Q : 

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a;
        ll temp, sum=0;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            sum+=temp;
        }

        sort( a.begin(), a.end());

        for( ll i=0; i<n; i++)
        {
            cout << sum << endl;
            sum-=a[i];
        }
    }
    return 0;
}
// Q : https://www.codechef.com/START96C/problems/WEEDING

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> a;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }            

        string ans="Yes";
        for( ll i=n-1; i>=0; i--)
        {
            if(m-a[i]+1<k)
            {
                ans="No";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}


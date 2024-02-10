// Q : https://codeforces.com/contest/1833/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Search(vector<ll> a, ll n, ll x)
{
    ll l=0, r=n-1;
    while (l <= r) {

        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll  n, k;
        cin >> n >> k;

        vector<ll> a, b, c;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        c=a;

        sort(c.begin(),c.end());
        sort(b.begin(),b.end());

        for( int i=0; i<n; i++)
        {
            ll ind=Search(c,n,a[i]);
            cout << b[ind] << " ";
        }
        cout << endl;
    } 
    return 0;
}
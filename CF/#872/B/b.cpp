// Q : https://codeforces.com/contest/1825/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll  n, m;
        cin >> n >> m;
        ll tot=n*m, temp;

        if(n>m)
        {
            temp=n;
            n=m;
            m=temp;
        }

        vector<ll> a, b;

        for( ll i=0; i<tot; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort( b.begin(), b.end());

        ll max1=b[tot-1], max2=b[tot-2];
        ll min1=b[0], min2=b[1];

        ll ans = max1-min2;

        if( max2-min1>ans )
            ans=max2-min1;
        ans*=(n-1);

        ans+=((m-1)*n)*(max1-min1);

        cout << ans << endl;
    } 
    return 0;
}
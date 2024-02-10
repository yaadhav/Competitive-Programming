// Q : https://codeforces.com/contest/1805/problem/C

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool Solve( ll a, ll b, ll c)
{
    ll d=(b*b)-(4*a*c);
    if( d<0 )
        return true;
    else
        return false;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t ;
 
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
 
        vector<ll> k;
        ll temp;
 
        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            k.push_back(temp);
        }
 
        while(m--)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            bool ans=false;
 
            for( ll i=0; i<n; i++)
            {
                ans=Solve( a, b-k[i], c);
 
                if(ans)
                {
                    cout << "YES" << endl << k[i] << endl;
                    break;
                }
            }
            if(!ans)
                cout << "NO" << endl;
        }
    } 
    
    return 0;
}
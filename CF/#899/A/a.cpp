// Q : https://codeforces.com/contest/1879/problem/A

#include<bits/stdc++.h>
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
 
        vector< pair<int,int> > a(n);
        ll s, e, t1, t2;
 
        cin >> s >> e;
        
        for( int i=0; i<n-1; i++)
        {
            cin >> t1 >> t2;
            a.push_back(make_pair(t2,t1));
        }
 
        sort( a.rbegin(), a.rend());
 
        if( a[0].first<e )
        {
            cout << s << endl;
            continue;
        }
 
        ll check=0;
        for( int i=0; e<=a[i].first; i++)
        {
            if( a[i].second>=s )
            {
                check=1;
                break;
            }
        }

        if(check)
            cout << -1 << endl;
        else
            cout << s << endl;
    }
 
    return 0;
}
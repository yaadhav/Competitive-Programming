// Q : https://codeforces.com/contest/1857/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
ll main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a, b;
        ll temp, k=(n*(n-1))/2;

        for( ll i=0; i<k; i++)
        {   
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        ll count=0;
        for( int i=0; i<k; i++)
        {
            if( a[i]==a[i+1] )
                count++;
            else
            {
                b.push_back(count);
            }
        }

        
        

        



        
    } 
    return 0;
}
// Q : https://codeforces.com/contest/1822/problem/B

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }        

        sort( a.begin(), a.end());

        ll mult1=a[0]*a[1];
        ll mult2=a[n-1]*a[n-2];

        if( mult1>mult2 )
            cout << mult1 << endl;
        else
            cout << mult2 << endl;
    } 
    
    return 0;
}


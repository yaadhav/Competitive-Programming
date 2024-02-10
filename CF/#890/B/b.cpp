// Q : https://codeforces.com/contest/1856/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll temp, count=0, sum=0;
        for( ll i=0; i<n; i++)
        {   
            cin >> temp;

            if( temp==1 )
                count++;
            else
                sum+=temp;
        }

        ll x=sum-((n-count)*2);

        if( n==1 )
            cout << "NO" << endl;
        else if( count-x<=n-count )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;        
    } 

    return 0;
}
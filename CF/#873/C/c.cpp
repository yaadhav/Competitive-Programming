// Q : https://codeforces.com/contest/1833/problem/C

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
        ll n, temp, odd=0, even=0;
        cin >> n;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;

            if( temp%2==0 )
            {
                if( even==0 || (even!=0 && temp<even) )
                    even=temp;
            }
            
            if( temp%2==1 )
            {
                if( odd==0 || (odd!=0 && temp<odd) )
                    odd=temp;
            }
        }

        if( odd==0 || even==0 || even>odd )
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
    return 0;
}
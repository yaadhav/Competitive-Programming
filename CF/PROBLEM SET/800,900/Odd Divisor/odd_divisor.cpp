// Q : https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h> 
using namespace std;

typedef unsigned long long int ll;
 
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

        if( n%2==1 )
        {
            cout << "YES" << endl;
            continue;
        }

        string ans="NO";
        while( n>1 && ans=="NO" )
        {
            if( n%2==1 )
                ans="YES";
            n/=2;
        } 

        cout << ans << endl;
    }

    return 0;
}
// Q : https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t; 
    cin >> t;

    while( t-- )
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll n=(k*(y+1)-1)/(x-1);

        if( (k*(y+1)-1)%(x-1)!=0 )
            n++;

        cout << n+k << endl;     
    }
    
    return 0;
}
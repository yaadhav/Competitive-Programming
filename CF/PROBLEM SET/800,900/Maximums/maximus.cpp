// https://codeforces.com/problemset/problem/1326/B

#include <bits/stdc++.h> 
using namespace std;

typedef long long int ll;
 
int main()
{    
    ll n;
    cin >> n;

    ll b, max=0;
    for( int i=0; i<n; i++)
    {
        cin >> b;
        cout << b+max << " ";

        if( b+max>max )
            max+=b;
    }    
    
    return 0;
}
// Q : https://www.codechef.com/problems/FIZZBUZZ2306

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll m, n, x, y;
        cin >> m >> n >> x >> y;

        ll a=max( x-1, m-x);
        ll b=max( y-1, n-y);

        cout << max( a*n, b*m) << endl;
    }   

    return 0;
}
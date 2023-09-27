// Q : https://codeforces.com/contest/1878/problem/C

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        ll min=k*((1+k))/2, max = (k*((2*n)-k+1))/2;

        if( x<=max && x>=min )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
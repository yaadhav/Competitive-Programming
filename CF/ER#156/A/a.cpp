// Q : https://codeforces.com/contest/1886/problem/A

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

        if( n<=6 || n==9 )
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        if( n%3==0 )
            cout << 1 << " " << 4 << " " << n-5 << endl;
        else
            cout << 1 << " " << 2 << " " << n-3 << endl;
    }

    return 0;
}
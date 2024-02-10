// Q : https://codeforces.com/contest/1878/problem/B

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

        for( ll i=1; i<3*n; i+=3)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
// Q : https://www.codechef.com/problems/SMARTER

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll l, v1, v2;
        cin >> l >> v1 >> v2;

        ll a=(l+v1-1)/v1, b=(l+v2-1)/v2;

        cout << a-b-1 << endl;
    }

    return 0;
}
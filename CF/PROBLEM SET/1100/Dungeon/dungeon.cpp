// Q : https://codeforces.com/problemset/problem/1463/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll tot=a+b+c;
        ll m=min(a,b);
        m=min(m,c);
        if( tot%9==0 && m>=tot/9 )
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
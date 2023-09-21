// Q : https://codeforces.com/contest/1873/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;

        if( a=="abc" || a=="cba" || a=="bac" || a=="acb" )
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
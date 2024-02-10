// Q : https://www.codechef.com/problems/SURPLUS

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll a1, b1, a2, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        ll c= a1-a2+b1-b2 ;

        if(c<0)        
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
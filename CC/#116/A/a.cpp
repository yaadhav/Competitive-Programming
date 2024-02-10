// Q : https://www.codechef.com/problems/HATTRICK

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        string check = a+b+c+d+e+f;
        
        if( check.find("WWW")>=0 )
            cout << "YES\n";
        else
            cout << "NO\n";        
    }

    return 0;
}
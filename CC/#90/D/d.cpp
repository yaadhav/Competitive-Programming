// Q : https://www.codechef.com/problems/APP_BAL_SCAs

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, m;
        cin >> m >> n;

        if(n>m)
        {
            cout << "NO\n";
            continue;
        }

        while(m>0 && m%2==0 )
            m/=2;        

        if(n%m==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
    
    return 0;
}


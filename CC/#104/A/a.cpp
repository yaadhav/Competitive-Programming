// Q : https://www.codechef.com/problems/PIZZAC

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        if( n==1 || n%2==0 )
            cout << "YES\n";
        else
            cout << "NO\n";    
    }

    return 0;
}
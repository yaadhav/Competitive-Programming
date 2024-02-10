// Q : https://www.codechef.com/problems/CHEFPRODUCT

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

        ll ans=sqrt(n);

        if( n%2==0 )
            cout << ans/2 << endl;
        else
            cout << (ans+1)/2 << endl;
    }   

    return 0;
}
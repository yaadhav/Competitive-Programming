// Q : https://www.codechef.com/problems/XORRY1

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x;
        cin >> x;

        ll n=0, s=0;
        for( n=1; pow(2,n)-1<x; n++);
        
        ll ans=x-pow(2,n-1);

        if( pow(2,n)==x )
            ans=0;

        cout << ans << " " << pow(2,n-1) << endl;
    }   

    return 0;
}
// Q : https://www.codechef.com/problems/SPLITADD

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> a(n,1);

        ll temp=n;
        for( ll i=1; i<n; i*=2)
        {
            for( ll j=0; j<n; j+=temp )
                a[j+(temp/2)]=i+a[j];   
            temp/=2;
        }

        ll sum=0;
        for( ll i=l-1; i<r; i++)
            sum+=a[i];

        cout << sum << endl;
    }

    return 0;
}
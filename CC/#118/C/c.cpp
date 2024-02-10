// Q : https://www.codechef.com/problems/GCDPERM

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll d=n/k;

        for( ll i=d; k>0; i+=d, k--)
            cout << i << " ";
        cout << endl;
    }   

    return 0;
}

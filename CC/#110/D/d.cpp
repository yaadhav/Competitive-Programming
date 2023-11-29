// Q : https://www.codechef.com/problems/SPCP4

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;

        ll b=x%k, g=(n-x)%k;

        cout << abs(b-g) << endl;
    }   

    return 0;
}
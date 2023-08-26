// Q : https://codeforces.com/contest/1862/problem/D

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll x1=(1+(sqrt(1+(8*n))))/2;
        ll x2=(x1*(x1-1))/2;
        cout << x1+n-x2 << endl;
    }

    return 0;
}

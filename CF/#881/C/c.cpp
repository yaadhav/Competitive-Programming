// Q : https://codeforces.com/contest/1843/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
 
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

        ll sum=n;
        while(n>0)
        {
            n/=2;
            sum+=n;
        }

        cout << sum << endl;
    } 
    return 0;
}
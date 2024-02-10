// Q : https://codeforces.com/problemset/problem/149/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ll k;
    cin >> k;
    vector<ll> a(12);

    for( ll &i : a)
        cin >> i;

    sort( a.rbegin(), a.rend());

    ll i, sum=0;
    for( i=0; sum<k && i<12; i++)
        sum+=a[i];

    if(sum>=k)
        cout << i << endl;
    else
        cout << -1 << endl;

    return 0;
}
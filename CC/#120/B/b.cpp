// Q : https://www.codechef.com/problems/LARGESTK343

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;

        cout << y/(x-1) << endl;
    }   

    return 0;
}
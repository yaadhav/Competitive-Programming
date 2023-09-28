// Q : https://www.codechef.com/problems/AGENTCHEF

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x;
        cin >> x;

        cout << (500+x-1)/x << endl;
    }

    return 0;
}
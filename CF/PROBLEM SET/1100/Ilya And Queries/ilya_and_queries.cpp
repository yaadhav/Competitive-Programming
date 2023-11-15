// Q : https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll m;
    string s;
    cin >> s >> m;

    vector<ll> check={0};

    for( int i=0, j=0; i<s.length()-1; i++)
    {
        if( s[i]!=s[i+1] )
            check.push_back(j);
        else
        {
            j++;
            check.push_back(j);
        }
    }

    while(m--)
    {
        ll l, r;
        cin >> l >> r;

        cout << check[r-1]-check[l-1] << endl;
    }

    return 0;
}
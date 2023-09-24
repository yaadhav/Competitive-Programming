// Q : https://codeforces.com/contest/476/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans=n/2;
    if( ans%m==0 && n%2==0 )
    {
        cout << ans << endl;
        exit(0);
    }

    ans=((ans+m)/m)*m;
    if( ans<=n )
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}
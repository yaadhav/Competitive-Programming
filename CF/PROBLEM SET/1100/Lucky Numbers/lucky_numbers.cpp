#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    long long int ans=0;

    for( int i=1; i<=n; i++)
        ans+=pow(2,i);

    cout << ans << endl;

    return 0;
}
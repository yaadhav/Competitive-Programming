#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    vector<int> a(n), b(n-1), c(n-2);
    for( int &i: a)
        cin >> i;
    for( int &i: b)
        cin >> i;
    for( int &i: c)
        cin >> i;

    sort( a.begin(), a.end());
    sort( b.begin(), b.end());
    sort( c.begin(), c.end());

    int ans1=-1, ans2=-1;
    for( int i=0; i<n-1; i++)
    {
        if( a[i]!=b[i] )
        {
            ans1=a[i];
            break;
        }
    }

    for( int i=0; i<n-2; i++)
    {
        if( b[i]!=c[i] )
        {
            ans2=b[i];
            break;
        }
    }

    if( ans1==-1 )
        ans1=a.back();
    if( ans2==-1 )
        ans2=b.back();

    cout << ans1 << endl << ans2;

    return 0;
}
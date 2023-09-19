#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;

    ll a, prev, ans;

    cin >> prev;
    ans=prev-1;

    while(--m)
    {
        cin >> a;

        if( a<prev )
            ans+=(n-prev+a);
        else
            ans+=a-prev;
        prev=a;
    }

    cout << ans ;

    return 0;
}
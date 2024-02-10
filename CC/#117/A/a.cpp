// Q : https://www.codechef.com/problems/WEPCH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;

        ll ans1=(h+x-1)/x;

        ll ans2=0;

        if( k*y1>=h )
        {
            ans2=(h+y1-1)/y1;
        }       
        else
        {
            h-=(k*y1);
            ans2=k+((h+y2-1)/y2);
        }

        if( ans1<ans2 )
            cout << ans1 << endl;
        else
            cout << ans2 << endl;
    }

    return 0;
}
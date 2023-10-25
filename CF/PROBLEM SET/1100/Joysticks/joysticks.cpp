#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll x, y;
    cin >> x >> y;

    if(y>x)
        swap(x,y);

    ll ans=(x-y+2)/3;
    x-=ans*2;
    y+=ans;

    if( x==y )
        ans+=(x-2)*2+1;
    else
        ans+=(x-1)*2+(y-x)%3-1;

    cout << ans << endl;

    return 0;
}
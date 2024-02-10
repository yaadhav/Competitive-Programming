// Q : https://codeforces.com/contest/651/problem/A
 
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll x, y;
    cin >> x >> y;

    if(y>x)
        swap(x,y);

    if( x<=1 )
    {
        cout << 0;
        exit(0);
    }

    ll ans=(x-y+2)/3;
    x-=ans*2;
    y+=ans;

    if( x==y )
        ans+=(x-2)*2+1;
    else
    {
        ans+=(x-1)*2;
        ans+=(y-x)%3;
    }

    cout << ans << endl;

    return 0;
}
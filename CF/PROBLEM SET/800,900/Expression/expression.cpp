// https://codeforces.com/contest/479/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans=a;

    if( a==1 && c==1 )
        ans=a+b+c;
    else if( a==1 )
        ans=(ans+b)*c;
    else if( b==1 )
    {
        if( a<c )
            ans=(ans+b)*c;
        else
            ans*=(b+c);
    }
    else if( c==1 )
        ans*=(b+c);
    else
        ans*=b*c;

    cout << ans << endl;
 
    return 0;
}
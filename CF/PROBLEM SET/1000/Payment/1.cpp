#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for( int cases=0; cases<t; cases++)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s ;

        long long x=s-(a*n);

        if( x>=0 && b>=x )
            cout << "YES\n" ;
        else if( x<0 && b>=(s%n) )
            cout << "YES\n" ;
        else 
            cout << "NO\n" ;
    }

    return 0;
}

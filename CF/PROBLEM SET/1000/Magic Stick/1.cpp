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
        int x, y;
        cin >> x >> y ;
        int t=x;

        while( x!=y && x>1 )
        {
            if( x%2==0 )
                x*=1.5;
            else
                x-=1;
                
            if( x==t )
                break;
        }

        if( x==y )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int a, b, c;
        cin >> a >> b >> c ;
 
        if( a>abs(b-c) )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }   
    
    return 0;
}

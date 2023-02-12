#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int n;
        cin >> n;

        if( n%2==0 )
            cout << 1 << " " << n/2 << endl ;
        else    
            cout << -1 << endl ;
    }   
    
    return 0;
}

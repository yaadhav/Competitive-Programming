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
        int a, b, c;
        cin >> a >> b >> c ;
        
        for( int i=1; i<=100; i++)
        {
            if( a%i!=0 && b%i!=0 && c%i!=0 )
            {    
                cout << i << endl ;
                break;
            }
        }
    }

    return 0;
}

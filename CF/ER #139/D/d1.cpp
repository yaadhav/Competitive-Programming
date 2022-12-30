#include <bits/stdc++.h>
using namespace std;

bool gcd( int x, int y )
{
    bool check=true;
    if ( x<y )  {
        x=x+y;
        y=x-y;
        x=x-y;
    }

    for ( int i=2; i<=y; i++)    
    {
        if ( x%i==0 && y%i==0 ) 
        {
            check=false;
            break;
        }
    }

    return check;
}

int main()
{
    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int x, y;
        cin >> x >> y ;

        int count=-1 ;
        if ( abs(x-y)==1 )
        {
            cout << count<< endl;
            continue;
        }
        else if ( x%y==0 || y%x==0 )
        {
            cout << 0 << endl ;
            continue;
        }
        else if ( x%2==y%2 )
        {
            cout << x%2 << endl ;
            continue;
        }
        

        bool check=true ;
        while ( check )
        {
            check=gcd( x++, y++) ;
            count++;
        }

        cout << count << endl;
    }   
    return 0;
}

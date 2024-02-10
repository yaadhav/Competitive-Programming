#include <bits/stdc++.h>
using namespace std;

inline void Finder( long long int small, long long int big, long long int x )
{
    int flag=0;

    while ( small<=big )
    {
        small=small+x;
        big=big-x;
        if ( small==big )
        {
            flag=1 ;
            break;
        }
    }

    if ( flag==1 )
        cout << "YES\n" ;
    else 
        cout << "NO\n" ;
}

int main()
{
    ios_base::sync_with_stdio(false);

    long int t, cases;
    unsigned long long int a, b, x, i, flag=0;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> a >> b >> x ;

        if ( a%2 != b%2 )
            cout << "NO\n" ;
            
        else
        {
            if ( a==b )
                cout << "YES\n" ;
            
            else if ( a<b )
                Finder( a, b, x );

            else if ( b<a )
                Finder( b, a, x );           
        }        
    }

    cin.tie(NULL);
    return 0;
}
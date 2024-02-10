#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int n;
        string s;

        cin >> n >> s ;

        int sum = s[0]=='1' ? 1 : 0 ;

        for( int i=1; i<n; i++)
        {
            if( s[i]=='0' )
            {   cout << '+' ;
                continue;   }

            if ( sum==1 )
            {   cout << '-' ;
                sum=0;  }

            else
            {   cout << '+' ;
                sum=1;  }
        }
        cout << endl ;
    }
    
    return 0;
}
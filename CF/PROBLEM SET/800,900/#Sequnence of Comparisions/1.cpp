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
        string s;
        cin >> s;

        bool l=0, g=0;  
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='<' )
                l=1;
            if( s[i]=='>' )
                g=1;

            if( l && g )
                break;            
        }

        if( l && !g )
            cout << "<" << endl ;
        else if( !l && g )
            cout << ">" << endl ;
        else if( l && g )
            cout << "?" << endl ;
        else 
            cout << "=" << endl ;

    }
    
    return 0;
}

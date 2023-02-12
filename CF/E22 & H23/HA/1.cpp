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
        int n, r=0, l=0;
        string s;

        cin >> n >> s ;

        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='R' )
            {   r=i+1; 
                break;  }
        }

        for( int i=s.length()-1; i>=0; i--)
        {
            if( s[i]=='L' )
            {   l=i+1; 
                break;  }
        }
        
        if( r==0 || l==0 )
        {
            cout << -1 << endl;
            continue;
        }

        if( r<l )
            cout << 0 << endl;
        else    
            cout << l << endl ;
    }

    return 0;
}

// Question : https://codeforces.com/contest/1791/problem/B

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
        int n, x=0, y=0;
        string s;
        bool check=0;

        cin >> n >> s ;

        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='L' )
                --x;
            else if( s[i]=='R' )
                ++x;
            else if( s[i]=='U' )
                ++y;
            else
                --y;

            if( x==1 && y==1 )
                check=1;
        }

        if( check )
            cout << "YES\n" ;
        else    
            cout << "NO\n" ;
    }   
    
    return 0;
}

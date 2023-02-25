// Question : https://codeforces.com/contest/1791/problem/A

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
        string s="codeforces";
        char c;
        bool check=0;

        cin >> c ;

        for( int i=0; i<s.length(); i++)
        {
            if( s[i]==c )
                check=1;
        }

        if( check )
            cout << "YES\n" ;
        else    
            cout << "NO\n" ;
    } 
    
    return 0;
}

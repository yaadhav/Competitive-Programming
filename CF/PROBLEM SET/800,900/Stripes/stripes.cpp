// Q : https://codeforces.com/problemset/problem/1742/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        string temp, ans="";

        for( int i=0; i<8; i++)
        {
            cin >> temp;

            if( temp=="RRRRRRRR" )
                ans="R";
        }

        if( ans=="" )
            ans="B";

        cout << ans << endl;
    }
    
    return 0;
}
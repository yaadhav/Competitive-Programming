// Q : https://codeforces.com/contest/1861/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while( t-- )
    {
        string a, b;
        cin >> a >> b;

        if( a==b )
        {
            cout << "YES" << endl;
            continue;
        }

        string ans="NO";
        for( int i=0; i<a.length()-1; i++)
        {
            if( a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1' )
            {
                ans="YES";
                break;
            }
        }

        cout << ans << endl;           
    }
    
    return 0;
}
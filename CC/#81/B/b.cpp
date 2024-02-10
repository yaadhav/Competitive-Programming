// Q : https://www.codechef.com/START81D/problems/MAXCAP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        string ans="NO";

        if( x<=8 && x*y<=500 )
            ans="YES";
        
        cout << ans << endl; 
    } 
    
    return 0;
}


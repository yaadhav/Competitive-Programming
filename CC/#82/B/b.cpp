// Q : https://www.codechef.com/START81D/problems/REACH_HOME

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

        if( x*5>=y )
            ans="YES";
        
        cout << ans << endl; 
    }
    return 0;
}


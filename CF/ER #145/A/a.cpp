// Q : https://codeforces.com/contest/1809/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        string s;
        cin >> s;

        sort( s.begin(), s.end());

        int count=1, max=0;
        for( int i=0; i<3; i++)
        {
            if( s[i]!=s[i+1] )
            {
                if( max<count )
                    max=count;
                count=1;
            }
            else
                count++;
        }

        if( max<count )
            max=count;

        if( max==4 )
            cout << -1 << endl;
        else if( max==3 )
            cout << 6 << endl;
        else
            cout << 4 << endl;
    } 
    
    return 0;
}


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
        string s, a="", ans="NO";
        cin >> s;

        int open=0;
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='(' )
                open++;
            else
                open--;

            if( open==-1 )
                ans="YES";
        } 

        if( open!=0 )
            ans="YES";

        cout << ans << endl;

        if( ans=="NO"  )
            continue;

        for( int i=0; i<s.length(); i++)
            a+="(";
        for( int i=0; i<s.length(); i++)
            a+=")";

        if( a.find(s)!=-1 )
        {
            a="";
            for( int i=0; i<2*s.length(); i++)
            {
                if( i%2==0 )
                    a+="(";
                else
                    a+=")";
            }
        }
        
        cout << a << endl;
    }
    
    return 0;
}


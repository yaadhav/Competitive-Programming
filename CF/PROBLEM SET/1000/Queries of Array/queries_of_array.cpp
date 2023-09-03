// Q : https://codeforces.com/contest/1861/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while( t-- )
    {
        string s;
        cin >> s;

        int plus=0, minus=0, size=0;
        string curr, ans="YES";
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='+' )
            {
                plus++;
                size++;
            }
            else if( s[i]=='-' )
            {
                if( plus>0 )
                    plus--;
                else
                    minus++;
                size--;
            }
            else if( s[i]=='1' )
            {
                if( curr=="0" && minus==0 )
                {
                    ans="NO";
                    break;
                }
                curr=s[i];
                plus=0;
                minus=0;
            }
            else
            {
                if( (curr=="1" && plus==0) || size<2 )
                {
                    ans="NO";
                    break;
                }
                curr=s[i];
                plus=0;
                minus=0;
            }
        }     

        cout << ans << endl;
    }
    
    return 0;
}
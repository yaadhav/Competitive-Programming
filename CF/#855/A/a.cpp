// Q : https://codeforces.com/contest/1800/problem/A

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
        int n;
        string s, m="meow";

        cin >> n >> s;

        for( int i=0; i<n; i++)
            s[i]=tolower(s[i]);
        
        bool check=1;
        int j=0;
        for( int i=0; i<n-1; i++)
        {
            if( s[i]!=s[i+1] )
            {
                if( s[i]!=m[j] )
                {
                    check=0;
                    break;
                }
                else
                    j++;
            }
        }

        if( s[n-1]!=m[j] || j<3 )
            check=0;

        if( check )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;    
    } 
    
    return 0;
}


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
        int n;
        string s;

        cin >> n >> s ;

        char c;
        int count=0, check=0;

        for( int i=0; i<n; i++)
        {
            if( s[i]!='0' )
            {
                if(check>0)
                {
                    if (s[i-1]=='0' && c!=s[i])
                        count++;
                }
                check++;
                c=s[i];
            }
        }

        if( check==0 )
            count=n;

        cout << count << endl ;
    }   
    
    return 0;
}

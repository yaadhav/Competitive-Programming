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
        int n, m;
        string a, b;

        cin >> n >> m >> a >> b ;

        string s=a+b;

        sort( s.begin(), s.end() );

        int count=1, res=0;
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]==s[i+1] )
                count++;
            else
            {
                if(count%2==1)
                    res++;
                count=1;
            }
        }
        
        if( (n+m)%2==res )
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }   
    
    return 0;
}

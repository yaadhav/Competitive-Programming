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
        string a, b, c;

        cin >> n >> m >> a >> b ;

        vector<char> s;
        for( int i=0; i<n; i++)
            s.push_back(a[i]);
        for( int i=m-1; i>=0; i--)
            s.push_back(b[i]);

        int count=1, res=0, i;
        bool check=true;

        for( i=0; i<s.size()-1; i++ )
        {
            if( s[i]!=s[i+1] )
            {
                if( count>1 )
                    res++;
                if( count>2 || res>1 )
                    check=false;
                count=1;
            }
            else
                count++;
        }

        if( count>1 )
            res++;
        if( count>2 || res>1 )
            check=false;

        if( check )
            cout << "YES\n" ;
        else 
            cout << "NO\n" ;       
    } 
    
    return 0;
}

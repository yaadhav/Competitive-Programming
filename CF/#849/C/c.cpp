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

        int i=0, j=n-1, count=n;
        
        while( i<j )
        {
            if( s[i]!=s[j] )
                count-=2;
            else 
                break;

            i++; j--;
        }

        cout << count << endl ;
    }   
    
    return 0;
}

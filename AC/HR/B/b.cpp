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
        cin >> n;

        string a, b;
        cin >> a >> b ;

        sort( a.begin(), a.end() );
        sort( b.begin(), b.end() );

        if( a==b )
         cout << "Yes\n";
        else 
         cout << "No\n";       
    }   
    
    return 0;
}

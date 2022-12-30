#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    long long int t, cases, i, key;
    string str, sub;

    cin >> t ;

    for ( i=0; i<20; i++ )
        str = str + "Yes" ;

    for ( cases=0; cases<t; cases++ )
    {
        cin >> sub ;
        key = str.find(sub) ;

        if ( key >=0 && key <=60 )
        cout << "YES" << endl ;
        else 
        cout << "NO" << endl ;
    }
    
    


    cin.tie(NULL);
    return 0;
}

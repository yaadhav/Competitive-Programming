#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    long long int t, cases, n, a, b;

    cin >> t ;

    for ( cases=0; cases<t; cases++ )
    {
        cin >> n >> a >> b ;

        if( n==1 )
            cout << "Yes\n" ;

        else if( n-a-b >=2 )
            cout << "Yes\n" ;

        else 
            cout << "No\n" ;
    }
    
    cin.tie(NULL);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    long int t, cases, n, m, k, x;
    long int freq, rem, check;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n >> m >> k >> x ;

        freq = (n*k)+ m ; 

        rem = x%freq ;
        check = n*(k-1) ;

        if ( rem>check || rem==0 )
            cout << "Yes\n" ;
        else    
            cout << "No\n" ;       
    }   

    cin.tie(NULL);
    return 0;
}

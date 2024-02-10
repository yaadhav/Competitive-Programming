// Q : https://www.codechef.com/START79D/problems/BETDEAL

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
        int a, b;
        cin >> a >> b;
        b*=2;

        if( 100-a<200-b )
            cout << "FIRST\n" ;
        else if ( 100-a>200-b )
            cout << "SECOND\n" ;
        else
            cout << "BOTH\n" ;
    } 
    
    return 0;
}


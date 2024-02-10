// Q : https://www.codechef.com/problems/ONEMORE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int x;
        cin >> x ;

        if( x<=24 )
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
    } 
    
    return 0;
}


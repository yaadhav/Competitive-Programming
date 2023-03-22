// Q : https://www.codechef.com/problems/CANDIVIDE

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

        if( x%3!=0 )
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
    } 
    
    return 0;
}


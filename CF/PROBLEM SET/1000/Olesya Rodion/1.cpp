#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, t;
    cin >> n >> t ;

    string res;

    if( t==10 )
    {
        if( n==1 )
            t=-1;
        else
            --n;
    }

    while(--n)
        res+='0';
    
    cout << t << res ;
    
    return 0;
}
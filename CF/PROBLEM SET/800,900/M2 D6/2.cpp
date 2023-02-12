#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int T, cases;

    cin >> T ;

    for ( cases=0; cases<T; cases++)
    {
        int n, count1=0, count2=0;

        cin >> n;

        while( n%6==0 )
        {    n/=6;
            count1++;    }

        int t=1;
        while(t<n)
        {
            t*=3;
            count2++;
        }     

        if ( t==n )    
            cout << count1+(2*count2) << endl ;
        else    
            cout << -1 << endl ;
    }

    return 0;
}
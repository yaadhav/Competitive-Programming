#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cases, n, sum;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n;

        sum=0;
        while( n>9 )
        {
            sum+=9;
            n=n/10;
        }

        cout << sum+n << endl ;
    }   
    return 0;
}

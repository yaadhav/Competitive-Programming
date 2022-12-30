#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    long int t, cases, n, a, b;
    long int i, time ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n >> a >> b ;
        time=0;

        while ( n>=2 )
        {
            n=n/2 ;
            time = time + a + b ;
        }

        cout << time-b << endl ;
    }   
    cin.tie(NULL);
    return 0;
}

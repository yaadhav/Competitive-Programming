#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for( int cases=0; cases<t; cases++)
    {
        int n, k;
        cin >> n >> k ;

        if( n%2!=k%2 )  {
            cout << "NO\n" ;
            continue;
        }

        int sum=0;
        for( int i=1; i<k*2 && sum<=n; i=i+2)  {
            sum+=i;
        }

        if( sum>n )
            cout << "NO\n" ;
        else 
            cout << " YES\n" ;
    }  
    
    return 0;
}
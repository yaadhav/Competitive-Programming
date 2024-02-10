#include <bits/stdc++.h>
using namespace std;

int ans;

int gcd( int a, int b)
{
    if( b==0 )
        ans=a; 
    else
        gcd( b, a%b);

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for( int cases=0; cases<t; cases++)
    {
        int a, b;
        cin >> a >> b;

        int max=a>b ? a:b ;
        int min=a<b ? a:b ;

        cout << gcd(max,min) << endl ;      
    }

    return 0;
}

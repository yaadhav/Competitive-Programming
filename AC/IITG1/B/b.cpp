#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n ;

    if( n%2==1 )
    {
        cout << -1 ;
        exit(0);
    }

    for( int i=1; i<=n; i++)
    {
        if( i%2==1 )
            cout << i+1 << " " ;
        else
            cout << i-1 << " " ;
    }

    return 0;
}

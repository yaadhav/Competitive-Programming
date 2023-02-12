#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v, a, b, c;
    cin >> v >> a >> b >> c ;

    int sum=0 ;

    while( sum <= v )
        sum+=a+b+c;

    sum-=c;

    if( sum<=v )
    {
        cout << "T" ;
        exit(0);
    }

    sum-=b;

    if( sum<=v )
        cout << "M" ;
    else
        cout << "F" ;
    
    
    return 0;
}


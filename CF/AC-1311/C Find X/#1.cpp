#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t, cases, p, q, r;
    long long int tot, mid, x;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
		cin >> p >> q >> r ;

        mid = abs(p-q);
        tot=mid*2;

        if ( p>tot || q>tot || r>tot )
        {   cout << -1 << endl ;
            continue;   }

        if( r>mid )
            x=r-mid ;

        else
            x=mid+r ;

        cout << x << endl; 
    }

    

    cin.tie(NULL);
    return 0;
}

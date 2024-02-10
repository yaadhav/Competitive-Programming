#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long int t, cases, i, sum ;
    vector<int> r ; int R;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        for( i=0; i<3; i++ )
        {
            cin >> R ;
            r.push_back(R) ;
        }

        sort( r.begin(), r.end(), greater<>() ) ;

        if ( r[0]>(r[1]+r[2]) )
            cout << "Yes\n" ;
        else 
            cout << "No\n" ;
    }

    cin.tie(NULL);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int x, y;
        cin >> x >> y ;

        int diff=y-x;
        if ( diff==1 )
        {
            cout << -1 << endl;
            continue;
        }
        else if ( x%y==0 || y%x==0 )
        {
            cout << 0 << endl ;
            continue;
        }
        else if ( x%2==y%2 )
        {
            cout << x%2 << endl ;
            continue;
        }
        
        int div=2;
        vector<int> ans;
        while( div<=diff)
        {
            if( diff%div==0 )
            {
                int fact;
                for( fact=div; fact<=x; fact+=div);

                ans.push_back(fact-x);
            }
            div++;
        }

        sort( ans.begin(), ans.end() );
        cout << ans[0] << endl;
        
    }   
    return 0;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t, cases, m, i, j, sum;
    vector<int> b; int B;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> m >> sum ;

        for( i=0; i<m; i++)
        {
            cin >> B;
            b.push_back(B) ;
        }

        sort( b.begin(), b.end()) ;

        j=0;
        for( i=1; i<=b[b.size()-1]; i++)
        {
            if ( i!=b[j] )
            {
                sum-=i ;
                --j ;
            }
            ++j;
        }

        while ( sum>0 )
        {
            sum-= i ;
            i++;
        }

        if( sum==0 )
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;

        b.clear();
    }

    cin.tie(NULL);
    return 0;
}

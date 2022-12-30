#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int n, i, q, t, yk;
    vector<int> b; int temp;

    cin >> n >> q ;

    for( i=0; i<n; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }

    for( i=0; i<q; i++)
    {
		cin >> t >> yk;

        if ( t==2 )
        {
            sort( b.begin(), b.end(), greater<>() );
            cout << b[yk-1] << endl ;            
        }

        else
            b[yk]=abs(b[yk]-1);
    
    }

    cin.tie(NULL);
    return 0;
}

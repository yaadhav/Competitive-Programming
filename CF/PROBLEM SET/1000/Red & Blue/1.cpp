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
        int n, m, temp;
        vector<int> r, b;

        cin >> n ;
        for( int i=0; i<n; i++)
        {
            cin >> temp ;
            r.push_back(temp);
        }

        cin >> m ;
        for( int i=0; i<m; i++)
        {
            cin >> temp ;
            b.push_back(temp);
        }

        int sum=0, max1=0, max2=0;

        for( int i=0; i<n; i++)
        {
            sum+=r[i];

            if( sum>max1 )
                max1=sum;
        }

        sum=0;
        for( int i=0; i<m; i++)
        {
            sum+=b[i];

            if( sum>max2 )
                max2=sum;
        }
        
        cout << max1+max2 << endl;
        r.clear();
        b.clear();
    }

    return 0;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for( int cases=0; cases<t; cases++)
    {
        int n, m;
        cin >> n >> m ;

        vector<long long int> a, b; int temp;
        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for( int i=0; i<m; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort( a.begin(), a.end() );

        for( int i=0; i<m; i++)
        {
            int j;
            for( j=0; j<n; j++)
            {
                if( a[j]<b[i] )
                {
                    a[j]=b[i] ;
                    sort( a.begin(), a.end() );
                    break;
                }
            }
            
            if( j==n )
                a[0]=b[i];
        }

        long long int sum=0;
        for( int i=0; i<n; i++)
            sum+=a[i];

        cout << sum << endl ;  
        a.clear();
        b.clear();      
    }
    
    return 0;
}


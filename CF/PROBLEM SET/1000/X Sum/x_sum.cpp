// Q : https://codeforces.com/problemset/problem/1676/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a;
        int temp;

        for( int i=0; i<n; i++)
        {
            vector<int> row;
            for( int j=0; j<m; j++)
            {
                cin >> temp;
                row.push_back(temp);
            }
            a.push_back(row);
        }         
        
        int size = m+n-1 ;
        vector<int> rd(size), ld;
        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<m; j++)
            {
                rd[i+j]+=a[i][j];
            }
        }

        for( int i=0, j=m-1; i<n; )
        {
            int sum=0;
            for( int x=i, y=j; x<n && y<m; x++,y++)
                sum+=a[x][y];

            ld.push_back(sum);

            if( j!=0 )
                j--;
            else
                i++;
        }
        
        int max=0;
        for( int i=0, x=0; i<n; i++, x++)
        {
            for( int j=0, y=x+m-1; j<m; j++, x++, y--)
            {
                if( rd[x]+ld[y]-a[i][j]>max )
                    max=rd[x]+ld[y]-a[i][j];            
            }
            x=i;
        }

        cout << max << endl;
    }
    
    return 0;
}
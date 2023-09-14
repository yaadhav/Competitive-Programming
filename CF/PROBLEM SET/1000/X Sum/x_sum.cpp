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
        vector<int> rd(size), ld(size);
        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<m; j++)
            {
                rd[i+j]+=a[i][j];
            }
        }

        for( int i=m-1; i>=0; i--)
        {
            int sum1=0, sum2=0;
            for( int j=i, k=0; j<m && k<n; j++,k++)
            {
                sum1+=a[j][k];
                sum2+=a[k][j];
            }
            ld[i+n-1]=sum1;
            ld[m-i-1]=sum2;
        }

        for( int i: rd)
            cout << i << " ";
        cout << endl;

        for( int i: ld)
            cout << i << " ";
        cout << endl;
        
        int max=0;
        for( int i=0, x=0; i<n; i++, x++)
        {
            for( int j=0, y=x+m-1; j<m; j++, x++, y--)
            {
                cout << "x&y--->" << x << " " << y << endl;               
            }
            x=i;
        }

        cout << max << endl;
    }
    
    return 0;
}
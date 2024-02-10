// Q : https://codeforces.com/contest/1799/problem/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> p, a;
        int temp;

        for( int i=0; i<m; i++)
        {
            cin >> temp ;
            p.push_back(temp);
        }

        vector<int> c={p[0]};
        a.push_back(1);
        bool check;

        for( int i=1; i<m; i++)
        {
            check=false;

            for( auto j : c )
            {
                if( j==p[i] )
                {
                    check=true;
                    break;
                }
            }

            if( !check )
            {
                a.push_back(i+1);
                c.push_back(p[i]);
            }            
        }

        for( int i=a.size(); i<n; i++ )
            a.push_back(-1);

        for( int i=n-1; i>=0; i--)
            cout << a[i] << " " ;
        cout << endl ;
    } 
    
    return 0;
}


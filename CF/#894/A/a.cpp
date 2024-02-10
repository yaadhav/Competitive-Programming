// Q : https://codeforces.com/contest/1862/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        char s[20][20];

        for( int i=0; i<n; i++)
        {
            for( int j=0; j<m; j++)
                cin >> s[i][j];
        }

        string name="vika";
        int check=0;

        for( int i=0; i<m; i++)
        {
            for( int j=0; j<n; j++)
            {
                if( s[j][i]==name[check] )
                {
                    check++;
                    break;
                }
            }
        }

        if( check==4 )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;        
    }

    return 0;
}

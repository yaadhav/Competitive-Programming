//Question : https://codeforces.com/contest/1788/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int n, temp;
        vector<int> a;
        int l=0;

        cin >> n;

        for( int i=0; i<n; i++)
        {
            cin >> temp ;
            a.push_back(temp);

            if( temp==2 )
                l++;
        }

        int r=0;
        bool check=false;

        for( int i=0; i<n-1 && !check; i++)
        {
            if( a[i]==2 )   {
                l--;
                r++;
            }

            if( l==r )  {
                cout << i+1 << endl;
                check=true;
            }
        }

        if( !check )
            cout << -1 << endl ;
    } 
    
    return 0;
}

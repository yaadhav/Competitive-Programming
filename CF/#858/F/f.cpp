// Q : https://codeforces.com/contest/1807/problem/F

#include <bits/stdc++.h>
using namespace std;

int imove( int i, string d)
{
    if( d[0]=='D' )
        i++;
    else
        i--;

    return i;
}

int jmove( int j, string d)
{
    if( d[1]=='R' )
        j++;
    else
        j--;

    return j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while( t--  )
    {
        int n, m, i1, i2, j1, j2;
        string d;

        cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;

        int i=i1, j=j1, ans=0;
        int check2=0, c=0;
        bool check1=false;

        if( i==i2 && j==j2 )
            check1=true;

        while( !check1 && check2<5 )
        {
            int x=imove( i, d);
            int y=jmove( j, d);

            if( x>0 && x<=n && y>0 && y<=m )
            {
                i=x;
                j=y;
            }
            if( x==0 || x==n+1 )
            {
                ans++;
                d[0] = d[0]=='U' ? 'D':'U';
                c++;
            }
            if( y==0 || y==m+1 )
            {
                ans++;
                d[1] = d[1]=='R' ? 'L':'R';
                c++;
            }
            if( c==2 )
                ans--;

            if( i==i2 && j==j2 )
                check1=true;
            if( i==i1 && j==j1 )
                check2++;
            c=0;
        }

        if( !check1 )
            ans=-1;

        cout << ans << endl;
    }
    return 0;
}

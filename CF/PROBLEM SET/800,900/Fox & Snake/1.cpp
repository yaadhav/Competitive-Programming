#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 

    int n, m;
    cin >> n >> m;
    char a[100][100];

    for( int i=0; i<n; i++)
    {
        for( int j=0; j<m; j++)
        a[i][j]= i%2==0 ? '#':'.' ;
    }

    for( int i=1; i<=n; i+=2)
    {
        if( i%4==1 )
            a[i][m-1]='#';
        else
            a[i][0]='#';
    }

    for( int i=0; i<n; i++)
    {
        for( int j=0; j<m; j++)
            cout << a[i][j] ;
        cout << endl;
    }        

    return 0;
}
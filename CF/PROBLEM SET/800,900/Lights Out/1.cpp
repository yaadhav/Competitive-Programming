// Q : https://codeforces.com/problemset/problem/275/A

#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    
    int a[3][3]={1,1,1,1,1,1,1,1,1};
    int n;
 
    for( int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            cin >> n;
            if( n%2==1 )
            {
                a[i][j]=1-a[i][j];
                if( i+1<=2 )
                a[i+1][j]=1-a[i+1][j];
                if( j+1<=2 )
                a[i][j+1]=1-a[i][j+1];
                if( i-1>=0 )
                a[i-1][j]=1-a[i-1][j];
                if( j-1>=0 )
                a[i][j-1]=1-a[i][j-1];
            }
        }
 
    }
 
    for( int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
            cout << a[i][j];
        cout << endl;
    }
    
 
    cin.tie(NULL);
    return 0;
}
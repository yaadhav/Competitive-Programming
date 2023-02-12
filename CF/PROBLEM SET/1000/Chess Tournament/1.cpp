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
        int n;
        string s;

        cin >> n >> s ;

        char a[100][100];

        int j=0, count=0, c=0;
        for( int i=0; i<n; i++)  {

            count = s[i]=='2' ? count+1:count ;
            for( int j=i; j<n; j++)  {

                if( i==j )  {
                    a[i][j]='X';
                    continue;
                }
                
                if( s[i]=='1' || s[j]=='1' )  {
                    a[i][j]='=';
                    a[j][i]='=';
                }

                else  {
                    a[i][j]= c==0 ? '+':'-' ;
                    a[j][i]= c==0 ? '-':'+' ;
                    c=abs(c-1);
                }
            }
        }

        if( count>0 && count<3 )
        {
            cout << "NO\n" ;
            continue;
        }
        
        cout << "YES\n" ;
        for( int i=0; i<n; i++)  {
            for( int j=0; j<n; j++)  {
                cout << a[i][j] ;
            }
            cout << endl;
        }

        
    }
 
    return 0;
}
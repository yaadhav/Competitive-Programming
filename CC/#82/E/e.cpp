// Q : https://www.codechef.com/problems/MATDIF

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
        int n;
        cin >> n;
        
        int a=1;
        for( int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cout << a << " " ;
                a+=2;

                if( a>n*n )
                    a=2;
            }
            cout << endl ;
        }
    } 
    
    return 0;
}


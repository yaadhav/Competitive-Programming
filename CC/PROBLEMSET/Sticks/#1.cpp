#include <bits/stdc++.h>
using namespace std;

long long int size = 100000 ;

int main()
{
    ios_base::sync_with_stdio(false);

    unsigned long long int t, cases, sticks[size];
    unsigned long long int n, i, j, k;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n ;

        for( i=0; i<n; i++ )
        {
            cin >> sticks[i];
        }

        for( i=0; i<n; i++ )
        {
            for( j=i+1; j<n; j++)
            {
                if( sticks[i] == sticks[j] )
                {
                    for( k=j; k<n-1; k++)
                    {
                        sticks[k]=sticks[k+1];
                    }
                    n--;
                }
            }
        }

        cout << n ;        
    }

    cin.tie(NULL);
    return 0;
}
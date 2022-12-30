#include <bits/stdc++.h>
using namespace std;

long long int size = 100000 ;

int main()
{
    ios_base::sync_with_stdio(false);

    int t, cases, dolls[size], key[size];
    long long int n, i, j, k=0;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n ;

        for( i=0; i<n; i++ )
        {
            cin >> dolls[i];
        }

        for( i=0; i<n; i++ )
        {
            for( j=i+1; j<n; j++)
            {
                if( dolls[i] > dolls[j] )
                {
                    int temp;
                    temp=dolls[i];
                    dolls[i]=dolls[j];
                    dolls[j]=temp;
                }
            }
        }

        for( i=0; i<n; i=i+2 )
        {
            if ( dolls[i]!=dolls[i+1] )
            {
                key[k]= dolls[i] ;
                k++;
                break;
            }
        }
    } 

    for( i=0; i<k; i++)
    cout << "\n" << key[i] ;

    cin.tie(NULL);
    return 0;
}
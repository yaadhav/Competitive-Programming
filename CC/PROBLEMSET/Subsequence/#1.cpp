#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t, cases, n, i, j;
    long long int arr[100000], count, max;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n ;

        for( i=0; i<n; i++ )
        {   cin >> arr[i];  }

        max=0;

        for( i=0; i<n; i++ )
        {
            count=0;
            for( j=0; j<n; j++ )
            {
                if( arr[i] == arr[j] )  
                    count++;
            }
            if ( count>max )
            max=count;
        }

        cout << max-1 << endl;
    }

    cin.tie(NULL);
    return 0;
}
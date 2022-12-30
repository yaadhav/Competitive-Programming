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

        count=0;

        for( i=0; i<n; i++ )
        {
            if ( arr[i]%2==0 )
                count++;
        }

        cout << count << endl;
    }

    cin.tie(NULL);
    return 0;
}
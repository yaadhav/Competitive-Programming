// Q : https://www.codechef.com/START91C/problems/NAS_2523

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;

        if( n>1 && n%2==1 )
        {
            cout << -1 << endl;
            continue;
        }

        for( int i=n; i>0; i--)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}


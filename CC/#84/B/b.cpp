// Q : https://www.codechef.com/START81D/problems/ELECTN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int temp, count=0;
        for( int i=0; i<n; i++)
        {
            cin >> temp;

            if( temp>=x )
                count++;
        }
        
        cout << count << endl ;
    }
    return 0;
}


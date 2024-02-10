// Q : https://codeforces.com/contest/1802/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- )
    {
        int n, temp;
        cin >> n ;

        int pos=0, neg;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            if( temp>0 )
                pos++;
        }
        neg=n-pos;

        for( int i=1; i<=pos; i++)
            cout << i << " ";
        for( int i=1; i<=neg; i++)
            cout << pos-i << " ";
        cout << endl;

        for( int i=1; i<=neg; i++)
            cout << 1 << " " << 0 << " " ;
        for( int i=1; i<=pos-neg; i++)
            cout << i << " " ;
        cout << endl;
    }   

    return 0;
}
// Q : https://codeforces.com/contest/1807/problem/B

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
        cin >> n ;

        int temp, odd=0, even=0;
        for( int i=0; i<n; i++)
        {
            cin >> temp;

            if( temp%2==0 )
                even+=temp;
            else
                odd+=temp;
        }

        if( even>odd )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    } 
    
    return 0;
}

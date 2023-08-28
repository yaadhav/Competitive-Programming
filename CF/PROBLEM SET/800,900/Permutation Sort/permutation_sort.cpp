// Q : https://codeforces.com/contest/1525/problem/B

#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n, first, last;
        cin >> n >> first;

        int check=1;
        for( int i=2; i<=n; i++)
        {
            cin >> last;
            if( last!=i )
                check=0;
        }

        if( first==1 && check)
        {
            cout << 0 << endl;
            continue;
        }

        if( first==1 || last==n )
            cout << 1 << endl;
        else if( first==n && last==1 )
            cout << 3 << endl;
        else 
            cout << 2 << endl;   
    }
    
    return 0;
}
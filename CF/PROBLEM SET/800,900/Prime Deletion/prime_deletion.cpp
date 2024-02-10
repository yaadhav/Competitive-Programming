// Q : https://codeforces.com/contest/1861/problem/A

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
        int ans=0;
        char temp;

        for( int i=0; i<9; i++)
        {
            cin >> temp;

            if( temp=='1' && !ans )
                ans=13;
            else if( temp=='3' && !ans )
                ans=31;
        }

        cout << ans << endl;
    }

    return 0;
}
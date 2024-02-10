// Q : https://codeforces.com/contest/1858/problem/C

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
        int n;
        cin >> n;

        for( int i=1; i<=n; i=i+2 )
        {
            int temp=i;
            while( temp<=n )
            {
                cout << temp << " ";
                temp*=2;
            }
        }
        cout << endl;
    } 

    return 0;
}
// Q : https://codeforces.com/contest/1858/problem/A

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
        int a, b, c;
        cin >> a >> b >> c;

        string ans = c%2==1 ? "First":"Second" ;

        if( a>b )
            cout << "First" << endl;
        else if ( b>a )
            cout << "Second" << endl;
        else 
            cout << ans << endl;
    } 

    return 0;
}
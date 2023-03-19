// Q : 

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if( d<b || c-a>d-b )
        {
            cout << -1 << endl;
            continue;
        }

        int ans = (d*2)-(b*2)-c+a ;
        cout << ans << endl ;

        } 
    
    return 0;
}


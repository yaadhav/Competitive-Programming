#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int x, y, z;
        cin >> x >> y >> z ;

        int res = x*10>y ? y:x*10 ;

        cout << res*z << endl;    
    }   
    
    return 0;
}

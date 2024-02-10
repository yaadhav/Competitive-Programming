#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    int xres=0, yres=0, zres=0;
    while( n-- )
    {
        int x, y, z;
        cin >> x >> y >> z;

        xres+=x;
        yres+=y;
        zres+=z;
    }

    if( xres==0 && yres==0 && zres==0 )
        cout << "YES\n" ;
    else
        cout << "NO\n" ;
    
    return 0;
}
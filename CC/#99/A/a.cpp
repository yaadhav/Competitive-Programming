// Q : https://www.codechef.com/problems/MOZZ

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll x, y, r;
        cin >> x >> y >> r;

        ll tot=(r/30)+x;
        
        if( tot%y==0 )
            tot=tot/y;
        else
            tot=(tot/y)+1;
        
        cout << tot << endl;        
    }
    return 0;
}
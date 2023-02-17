#include <bits/stdc++.h>
using namespace std;

typedef double d;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        d hc, dc, hm, dm;
        d k, w, a;
        string ans="NO";

        cin >> hc >> dc >> hm >> dm
            >> k >> w >> a ;

        d r1=ceil(hm/dc), r2=ceil(hc/dm);

        if( r1<=r2 )
            ans="YES";

        for( int i=0; i<=k && ans=="NO"; i++)
        {
            int d=dc+(i*w);
            int h=hc+((k-i)*a);

            r1=ceil(hm/d);
            r2=ceil(h/dm);

            if( r1<=r2 )
                ans="YES";
        }

        cout << ans << endl ;

    }
    
    return 0;
}

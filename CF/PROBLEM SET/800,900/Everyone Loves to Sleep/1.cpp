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
        int n, hs, ms;
        cin >> n >> hs >> ms;

        int h, m, ans, diff;

        for( int i=0; i<n; i++)
        {
            cin >> h >> m;

            if( h<hs || (h==hs && m<ms) )
                h+=24;

            diff=(h-hs)*60+(m-ms);

            ans = i==0 ? diff:ans ;

            if( diff<ans )
                ans=diff;
        }

        cout << ans/60 << " " << ans%60 << endl;
    }
    
    return 0;
}
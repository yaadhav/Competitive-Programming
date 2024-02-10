#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, a;
        cin >> n >> k >> a;

        int ans=a%k==0 ? 0:k-(a%k), ans2=1-a%2;

        for( int i=1; i<n; i++)
        {
            cin >> a;
            int check = a%k==0 ? 0:k-(a%k);
            if( check<ans )
                ans=check;
            ans2+=1-a%2;
        }

        if( 2-ans2<ans && k==4 )
            ans = 2-ans2<=0 ? 0:2-ans2 ; 

        cout << ans << endl;

    }

    return 0;
}
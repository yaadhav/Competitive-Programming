// Q : https://www.codechef.com/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int h, x, y, ans=1;
        cin >> h >> x >> y;

        ans+=(h-y)/x ;

        if( (h-y)%x!=0 )
            ans++;

        cout << ans << endl; 
    } 
    
    return 0;
}


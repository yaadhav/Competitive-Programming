// Q : https://codeforces.com/problemset/problem/1895/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int ans;
        if(x>=y)
            ans=x;
        else if(x+k>=y)
            ans=y;
        else
            ans=(y*2)-x-k;
        
        cout << ans << endl;
    }

    return 0;
}
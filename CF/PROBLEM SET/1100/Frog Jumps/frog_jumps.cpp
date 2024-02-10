#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        s="R"+s+"R";

        int ans=0, prev=0;
        for( int i=1; i<s.length(); i++)
        {
            if( s[i]=='R' )
            {
                ans=max( i-prev, ans);
                prev=i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
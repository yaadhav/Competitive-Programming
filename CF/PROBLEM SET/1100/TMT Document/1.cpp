// Q : https://codeforces.com/problemset/problem/1509/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- )
    {
        int n;
        string s;

        cin >> n >> s ;

        vector<int> tc, mc;

        for( int i=0; i<n; i++)
        {
            if( s[i]=='T' )
                tc.push_back(i);
            else 
                mc.push_back(i);
        }

        int l=tc.size()/2;
        string ans="YES";

        if( l!=mc.size() )
            ans="NO";

        for( int i=0; i<mc.size() && ans=="YES"; i++ )
        {
            if( mc[i]<tc[i] || mc[i]>tc[i+l] )
                ans="NO";
        }

        cout << ans << endl;
    }   

    return 0;
}
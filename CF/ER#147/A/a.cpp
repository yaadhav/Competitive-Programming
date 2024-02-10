// Q : https://codeforces.com/contest/1821/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        string s;
        cin >> s;

        vector<int> pos;

        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='?' )
                pos.push_back(i);
        }

        int ans=1;
        for( auto i: pos)
        {
            if(i==0)
                i=9;
            else
                i=10;
            ans*=i;
        }

        if( s[0]=='0' )
            ans=0;

        cout << ans << endl;
    }
    
    return 0;
}


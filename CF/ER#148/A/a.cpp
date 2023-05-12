// Q : https://codeforces.com/contest/1832/problem/A

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
        string s, c, ans="NO";
        cin >> s;

        for( int i=0; i<s.length()/2; i++)
            c+=s[i];

        sort( c.begin(), c.end());

        for( int i=0; i<c.length()-1; i++)
        {
            if(c[i]!=c[i+1])
                ans="YES";
        }

        cout << ans << endl;
    }
    
    return 0;
}


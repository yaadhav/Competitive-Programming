// Q : https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool check=0;
    string ans="";

    for( int i=1; i<s.length(); i++)
    {
        ans+=tolower(s[i]);
        if( s[i]!=toupper(s[i]) )
            check=1;
    }
    
    if(check)
        cout << s << endl;
    else if( s[0]==tolower(s[0]) )
        cout << (char)toupper(s[0]) << ans;
    else
        cout << (char)tolower(s[0]) << ans;
    
    return 0;
}
// Q : https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans="NO";
    cin >> s;

    int count=1;
    for( int i=1; i<s.length(); i++)
    {
        if( s[i]==s[i-1] )
            count++;
        else
            count=1;

        if( count==7 )
            ans="YES";
    }

    cout << ans;
    
    return 0;
}
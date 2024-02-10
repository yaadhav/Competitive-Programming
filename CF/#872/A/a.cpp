// Q : https://codeforces.com/contest/1825/problem/A

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
        string s;
        cin >> s;

        bool check=true;

        for( int i=1; i<s.length(); i++)
        {
            if(s[i]!=s[0])
            {
                check=false;
                break;
            }            
        }

        if(check)
            cout << -1 << endl;
        else
            cout << s.length()-1 << endl;
    } 

    return 0;
}
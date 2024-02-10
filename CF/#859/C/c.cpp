// Q : https://codeforces.com/contest/1807/problem/C

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
        int n;
        string s;
        cin >> n >> s ;

        string ans="YES";
        for( int i=0; i<n && ans=="YES"; i++)
        {
            for( int j=i+1; j<n; j++)
            {
                if( s[i]==s[j] && i%2!=j%2 )
                    ans="NO";
            }              
        }

        cout << ans << endl ;
    } 
    
    return 0;
}

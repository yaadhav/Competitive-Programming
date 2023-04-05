// Q : https://www.codechef.com/problems/MAX_BIN

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
        int n, k;
        string s; 
        cin >> n >> k >> s;

        if( s[0]=='0' )
        {
            s[0]='1';
            k--;
        }

        while(k--)
            s+='0';

        cout << s << endl ;        
        
    } 
    
    return 0;
}


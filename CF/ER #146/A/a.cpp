// Q : https://codeforces.com/contest/1814/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t ;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        string ans="NO" ;

        if( n%2==0 )
            ans="YES";
        else
        {
            if( k%2==1 )
                ans="YES";
        }

        cout << ans << endl;
    } 
    
    return 0;
}


// Q : https://www.codechef.com/problems/ACCESS

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x;
        string s;
        cin >> n >> x >> s;

        ll swipes=0;
        string ans="YES";
        for( int i=0; i<n; i++)
        {
            if( s[i]=='0' )
                swipes--;
            else
                swipes=x;

            if( swipes<0 )
            {
                ans="NO";
                break;
            }
        }

        cout << ans << endl;
    }   

    return 0;
}
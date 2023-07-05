// Q : https://www.codechef.com/problems/SMILEY

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        bool start=false;
        ll ans=0, count=0;
        for( int i=0; i<n; i++)
        {
            if(s[i]==':')
            {
                if( start && count>0 )
                    ans++;
                else
                    start=true;
                count=0;
            }
            else if( start )
            {
                if( s[i]==')' )
                    count++;
                else
                {
                    count=0;
                    start=false;
                }
            }
        }

        cout << ans << endl; 
    }
    return 0;
}
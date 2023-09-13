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

        for( int i=n-3; i>=0; i--)
        {
            if( s[i]=='1' )
            {
                s[i+1]='0';
                s[i+2]='0';
            }
        }

        cout << s << endl;
    
    }
    
    return 0;
}
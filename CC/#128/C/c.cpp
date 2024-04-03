// Q : https://www.codechef.com/problems/BIS

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        ll a=0, b=0, c=0, d=0;
        for( ll i=0; i<n-1; i+=2)
        {
            if( s[i]=='0' && s[i+1]=='0' )
                a++;
            else if ( s[i]=='0' && s[i+1]=='1' )
                b++;
            else if ( s[i]=='1' && s[i+1]=='0' )
                c++;
            else
                d++;
        }

        ll ans=((a+d)*2)+min(c,ll(2))+min(d,ll(2));
        
        cout << ans << endl;

        
    }

    return 0;

}
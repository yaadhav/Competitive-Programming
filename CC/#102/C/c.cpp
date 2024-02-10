// Q : https://www.codechef.com/problems/BITPLAY

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        ll ans=1, mod=pow(10,9)+7;
        for( ll i=2; i<n; i+=2)
        {
            if( s[i]=='1' )
            {
                if( s[i-1]=='0' && s[i-2]=='0' )
                {
                    ans=0;
                    break;
                }
                else
                    ans=(ans*2)%mod;
            }
            else
            {
                if( s[i-1]=='0' && s[i-2]=='0' )
                    ans=(ans*3)%mod;
            }
        }

        cout << ans << endl;            
    }

    return 0;
}
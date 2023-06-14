// Q : https://www.codechef.com/START94C/problems/VOWMTRX

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, k, mod=1000000007;
        string s;
        cin >> n >> k >> s;

        ll count=0, part=0, check=0, ans=1;
        for( ll i=0; i<n; i++)
        {
            if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
            {
                count++;

                if( check==1 )
                    ans*=(part+1);
                    part=0;
                    check=0;
            }
            if( count==k )
            {
                count=0;
                check=1;
            }
            if( s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && check==1 )
                part++;
        }        

        cout << ans%mod << endl;
    }
    return 0;
}


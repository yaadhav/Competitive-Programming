// Q : https://www.codechef.com/problems/TRANCST

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string b="";

        ll temp=n;
        while( n>0 )
        {
            b+=to_string(n%2);
            n/=2;
        }

        ll l=b.length(), ind=0, add=0;
        for( ll i=l-1; i>=0; i--)
        {
            if( b[i]=='0' && ind==0 )
                ind=i;

            if( ind && b[i]=='1' )
            {
                add=1;
                break;
            }
        }

        if( add==0 )
        {
            cout << 0 << endl;
            continue;
        }

        ll ans=0;
        for( ll i=ind; i<l; i++)
            ans+=pow(2, i);

        cout << ans-temp << endl;  
     
    }
    return 0;

}

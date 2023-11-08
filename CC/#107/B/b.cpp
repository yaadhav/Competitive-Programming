// Q : https://www.codechef.com/problems/PASCRO

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
        string a, b;
        cin >> n >> a >> b;

        int ap=0, bp=0;
        for( int i=0; i<n; i++)
        {
            if( a[i]==b[i] ) continue;

            if( a[i]=='R' )
            {
                if( b[i]=='S' )
                    ap++;
                else
                    bp++;
            }
            else if( a[i]=='S' )
            {
                if( b[i]=='P' )
                    ap++;
                else
                    bp++;
            }
            else
            {
                if( b[i]=='R' )
                    ap++;
                else
                    bp++;
            }
        }  

        int ans=(ap+bp)/2;

        if( ap>bp )
            ans=0;

        cout << ans+1 << endl;
    }   

    return 0;
}
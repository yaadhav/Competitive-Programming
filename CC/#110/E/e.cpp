// Q : https://www.codechef.com/problems/SPCP5

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll h;
        cin >> h;

        if(h==1)
        {
            cout << 1 << endl;
            continue;
        }

        ll ans=-1, n=1, a;
        for( a=0; h-n+1>1 && ans==-1; n*=2, a++)
        {
            ll check=0;
            for( ll i=2; i<=sqrt(h-n+1); i++)
            {
                if((h-n+1)%i==0)
                {
                    check=1;
                    break;
                }
            }

            if(!check)
            {
                ans=a+1;
                break;
            }
        }

        if( ans==-1 && h==n-1 )
            ans=a;

        cout << ans << endl;
    }   

    return 0;
}
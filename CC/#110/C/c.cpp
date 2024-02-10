// Q : https://www.codechef.com/problems/SPCP3

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b;
        cin >> a >> b;

        ll ans1=0, check=0;
        for( ll i=a, j=b; i>1; i--, j++)
        {
            if( i%j==0 )
            {
                check=1;
                break;
            }
            ans1++;
        }

        ll ans2=0;
        for( ll i=a, j=b; j>1; i++, j--)
        {
            if( i%j==0 )
                break;
            ans2++;
        }

        if( ans1<ans2 && check)
            ans2=ans1;

        cout << ans2 << endl;
    }   

    return 0;
}
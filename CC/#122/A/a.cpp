// Q : https://www.codechef.com/problems/MATCH_ALK

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, ans=0, x=1;
        for( ll i=1; i<=22; i++)
        {
            cin >> a >> b ;

            ll check = a ;
            check+=(b*20);
            
            if( ans<check )
            {
                ans=check;
                x=i;
            }
        }

        cout << x << endl;
    }
    return 0;

}

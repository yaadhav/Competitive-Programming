// Q : https://www.codechef.com/problems/CHESS_PAIR

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x;
        cin >> n >> x;

        ll un=(2*n)-x;
        ll tot=un+x, ans=tot/2;

        ans=x-ans;

        if( ans<0 )
            cout << 0 << endl;
        else
            cout << ans*2 << endl;
        
    }

    return 0;
}
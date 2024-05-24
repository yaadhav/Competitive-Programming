#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;

        ll ans=0;
        while( b/k>=a){
            ans+=b%k+1;
            b/=k;
        }

        ans+=b-a;

        cout << ans << endl;
    }

    return 0;

}


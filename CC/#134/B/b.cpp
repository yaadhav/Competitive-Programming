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
        cin >> n;

        ll ans=(n/9)*45;
        ll rem=n%9;

        ans+=((rem*(rem+1))/2);

        cout << ans << endl;
    }

    return 0;

}


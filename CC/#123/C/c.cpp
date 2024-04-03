#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll c=n/2;
        ll sum=(c*(c+1))/2;

        if( n%2==0 )
            cout << sum*2 << endl;
        else
            cout << (sum*2)+(c+1) << endl;

    }
    return 0;

}


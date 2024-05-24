//

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
        string s;
        cin >> n >> s;

        vector<ll> a;

        ll c=1;
        for( ll i=1; i<n; i++) {
            if( s[i]!=s[i-1] )
                c++;
        }

        cout << c/2 << endl;
    }

    return 0;

}


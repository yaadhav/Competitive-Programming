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

        int ans=0;
        for( int i=1; i<n; i++) {
            if( s[i]==s[i-1] )
                i++;
            else 
                ans++;
        }

        cout << ans << endl;

    }

    return 0;

}


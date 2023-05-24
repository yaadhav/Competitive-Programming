// Q : https://www.codechef.com/START91C/problems/CHEFODD

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        string ans="YES";

        if( k>n/2 )
            ans="NO";
        if( ((n+1)/2)%2!=k%2 )
            ans="NO";

        cout << ans << endl;
    } 
    
    return 0;
}


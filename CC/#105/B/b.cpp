// Q : https://www.codechef.com/problems/TIES

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

        vector<ll> a(n);
        ll sum=0;
        for( ll &i: a)
        {
            cin >> i;
            sum+=i;
        }
        
        if( sum%n!=0 )
        {
            cout << " No" << endl;
            continue;
        }
        sum/=n;

        string ans="Yes";
        for( ll i=0; i<n; i++)
        {
            ll check=abs(a[i]-sum);
            cout << i << "---->" << check << "fhudsiuh" << check%2 << endl;
            if( (check%2)==1 );
            {
                ans="No";
                break;
            }
        }

        cout << ans << endl;
    }   

    return 0;
}
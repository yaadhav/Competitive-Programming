#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{ 
    ll n, k;
    cin >> n >> k;

    vector<ll> h(n);

    ll ans=0, sum=0; 
    for( ll i=0; i<n; i++)
    {
        cin >> h[i];

        if(i<k)
        sum+=h[i];
    }

    ll min=sum;
    for( ll i=k, j=0; i<n; i++, j++)
    {
        sum+=h[i]-h[j];
        
        if( min>sum )
        {
            min=sum;
            ans=j+1;
        }
    }

    cout << ans+1 << endl;

    return 0;
}
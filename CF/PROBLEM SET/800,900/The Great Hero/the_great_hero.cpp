#include <bits/stdc++.h> 
using namespace std;

typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while(t--)
    {
        ll ah, bh, n;
        cin >> ah >> bh >> n;

        vector<ll> a, b;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        for( ll i=0; i<n-1; i++)
        {
            ll d = b[i]/ah;
            d = b[i]%ah==0 ? d:d+1;

            bh-=(d*a[i]);
        }

        if( bh<=0 && b[n-1]>0 )
        {
            cout << "NO" << endl;
            continue;
        }

        while( bh>0 )
        {
            bh-=a[n-1];
            b[n-1]-=ah;
        }

        if( b[n-1]<=0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
 
    }
    
    return 0;
}
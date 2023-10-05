#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll min1, min2, max2, temp;
        
        cin >> min1;
        ll sum = min1, max1=min1;
        for( ll i=1; i<n; i++)
        {
            cin >> temp;
            sum+=temp;
            if( temp<min1 )
                min1=temp;
            if( temp>max1 )
                max1=temp;
        }

        cin >> min2;
        max2=min2;
        for( ll i=1; i<m; i++)
        {
            cin >> temp;
            if( temp<min2 )
                min2=temp;
            if( temp>max2 )
                max2=temp;
        }

        vector<ll> a={ max1, min1, max2, min2};
        sort( a.begin(), a.end());

        if( n==1 )
        {
            if( k%2==1 )
                cout << a[3] << endl;
            else
                cout << a[0] << endl;
            continue;
        }
        
        sum-=min1+max1;

        if( max1>min2 )
            sum+=a[2];
        else
            sum+=a[1];

        if( k%2==1 )
            cout << sum+a[3] << endl;
        else
            cout << sum+a[0] << endl;
    }

    return 0;
}
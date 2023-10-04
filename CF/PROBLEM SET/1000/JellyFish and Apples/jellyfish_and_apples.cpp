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

    if( k%2==0 )
        cout << sum << endl;
    else
        cout << sum-min1+max2 << endl;
    }

    return 0;
}
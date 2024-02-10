// Q : https://www.codechef.com/problems/AIRM

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a, d;
        ll temp;

        for( ll i=0; i<n*2; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        sort( a.begin(), a.end());

        for( ll i=0; i<n*2; i++)
            cout << a[i] << " ";

        ll count=1, max=0;
        for( int i=0; i<n*2-1; i++)
        {
            if( a[i]==a[i+1] )
                count++;
            else
            {
                if( count>max )
                    max=count;
                count=1;
            }
        }
        if( count>max )
            max=count;        

        cout << max << endl;

    }
    return 0;
}
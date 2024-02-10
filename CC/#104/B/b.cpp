// Q : https://www.codechef.com/problems/SANTACHOC

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll temp, sum=0;
        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            sum+=temp;
        }

        if( sum<n )
        {
            cout << "NO"<< endl;
            continue;
        }

        if( k==0 )
        {
            if( sum%n==0 )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;


    }

    return 0;
}
// Q : https://www.codechef.com/problems/STOCKMARKET

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, min;
        cin >> n >> min;

        ll temp, sum=min;
        for( int i=1; i<n; i++)
        {
            cin >> temp;
            sum+=temp;
            if( temp<min )
                min=temp;
        }

        cout << sum-min << endl;
    }

    return 0;
}
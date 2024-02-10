// Q : https://codeforces.com/contest/1832/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
 
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

        vector<ll> a;
        ll temp, back=0, sum=0;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            sum+=temp;
        }

        sort( a.begin(), a.end());

        for( int i=n-k; i<n; i++)
            back+=a[i];

        ll front=0, min=sum;
        for( int i=0; i<=2*k; i+=2)
        {
            if( front+back<min )
                min=front+back;

            front+=a[i]+a[i+1];
            back-=a[n-k+(i/2)];
        }

        cout << sum-min << endl;
    }
    
    return 0;
}


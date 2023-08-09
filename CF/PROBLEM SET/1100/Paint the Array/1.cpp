// Q : https://codeforces.com/problemset/problem/1618/C

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll hcf( ll a, ll b)
{
    if( a%b==0 )
        return b;
    else
        return hcf( b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        } 

        ll hcf1=a[0], hcf2=a[1];
        for( ll i=2; i<n; i++)
        {
            if( i%2==0 )
                hcf1 = a[i]>hcf1 ? hcf(a[i], hcf1) : hcf(hcf1, a[i]) ;         
            else
                hcf2 = a[i]>hcf2 ? hcf(a[i], hcf2) : hcf(hcf2, a[i]) ;

            if( hcf1==hcf2 )
                break;            
        }

        if( hcf1==hcf2 )
            cout << 0 << endl;
        else
        {
            if( hcf1!=1 )
                cout << hcf1 << endl;
            else
                cout << hcf2 << endl;
        }
    }

    return 0;
}
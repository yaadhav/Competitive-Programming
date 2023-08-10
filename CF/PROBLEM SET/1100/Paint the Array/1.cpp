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

        ll hcf1=a[0], hcf2=a[1], lcm1, lcm2=a[1];
        for( ll i=2; i<n; i++)
        {
            if( i%2==0 )
            {
                temp = a[i]>hcf1 ? hcf(a[i], hcf1) : hcf(hcf1, a[i]) ;  
                lcm1 = (a[i]*hcf1)/temp;
                hcf1 = temp;
            }   
            else
            {
                temp = a[i]>hcf2 ? hcf(a[i], hcf2) : hcf(hcf2, a[i]) ;
                lcm2 = (a[i]*hcf2)/temp;
                hcf2 = temp;
            }
            cout << lcm1 << " " << lcm2 << endl;

            temp = lcm1>lcm2 ? hcf(lcm1, lcm2): hcf(lcm2, lcm1) ;

            if( temp>1 )
                break;            
        }

        if( temp>1 )
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
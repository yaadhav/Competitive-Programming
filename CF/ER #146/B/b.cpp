// Q : https://codeforces.com/contest/1814/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd( ll a, ll b)
{
    if( b==0 )
        return a;
    else
        return gcd( b, a%b);
}

ll gd( ll n )
{
    ll i;
    for( i=sqrt(n); i>0; i-- )
    {
        if( n%i==0 )
            break;
    }

    return i;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll a, b;
        cin >> a >> b;

        if( a<b )
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }

        ll g = gcd( a, b) ;

        ll ans1=(g-1)+(a/g)+(b/g);

        ll ad=gd(a), bd=gd(b), ans2=ad+bd;

        ad=a/ad;
        bd=b/bd;

        if( ad>bd )
            ans2+=ad-1;
        else
            ans2+=bd-1;

        if( ans1<ans2 && a%b==0 )
            ans2=ans1;

        cout << ans2 << endl;        
    } 
    
    return 0;
}


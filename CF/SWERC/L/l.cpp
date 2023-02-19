#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    string s;
    cin >> n >> s >> q;

    ll c1=0, c2;
    for( ll i=0; i<s.length(); i++)
    {
        if( s[i]=='+' )
            c1++;
    }

    if( c1>n-c1 )   {
        c2=c1;
        c1=n-c1;
    }
    else
        c2=n-c1;

    while( q-- )
    {
        ll a, b;
        bool check=0;
        cin >> a >> b;

        ll min = a<b?a:b ;
        ll max = a>b?a:b ;

        
        if( c1==c2 )
            check=true;
        
        ll diff=(max*c1-min*c2), d=max-min;
        if( diff>0 )
        {
            if( diff%d==0 && diff/d<=c1 )
                check=true;           
        }
        else if( diff==0 )
            check=true;
                    
        if( check )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    
    return 0;
}

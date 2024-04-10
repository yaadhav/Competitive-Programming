// Q : https://www.codechef.com/problems/BLNDOR

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n ;

        ll c=0;

        vector<ll> a(n);
        for( ll &i: a)
        {
            cin >> i;
            if( i==2 )
                c++;
        }

        if( c%8==0 )
            cout << "Yes\n";
        else
            cout << "No\n";

        
    }

    return 0;

}


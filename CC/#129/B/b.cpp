// Q : https://www.codechef.com/problems/GPL

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
        string s;
        cin >> n >> s;

        ll z=0, o=0;
        for( ll i=0; i<n; i++)
        {
            if( s[i]=='0' )
                z++;
            else
                o++;
        }

        if( n%2==0 )
        {
            if( z==o )
                cout << "Bob\n";
            else
                cout << "Alice\n";
        }
        else
        {
            if( abs(z-o)==1 )
                cout << "Alice\n";
            else 
                cout << "Bob\n";
        }

        
    }

    return 0;

}


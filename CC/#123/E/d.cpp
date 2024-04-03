#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        if( n<=a )
            cout << "Alice\n";
        else if( n-1<=b )
            cout << "Bob\n";
        else if( a==b )
        {
            if( n%(a+1)==0 )
                cout << "Bob\n";
            else
                cout << "Alice\n";
        }
        else if( a>b )
            cout << "Alice\n";
        else
            cout << "Bob\n";


    }
    return 0;

}


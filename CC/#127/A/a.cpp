// Q : https://www.codechef.com/START127B/problems/SUPINC

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        if( x>pow(2,k-1)-1 )
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;

}


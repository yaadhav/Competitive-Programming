// Q : https://www.codechef.com/problems/VAL142

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll sum = 1;
        for( ll i=2; i<pow(2,7); i*=2)
            sum+=i;

        if( n>=sum )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;

}

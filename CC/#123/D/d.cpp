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

        ll sum=(n*(n+1))/2;

        cout << sum-1+n << endl;

    }
    return 0;

}


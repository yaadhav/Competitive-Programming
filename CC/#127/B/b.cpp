// // Q : https://www.codechef.com/START127B/problems/ANTITRI

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n, l;
        cin >> n >> l;

        ll i=1, sum=3;
        for( i=1; sum<l && i<=n; i++)
        {
            cout << i <<  " ";
            sum=i+i+1;
        }

        for( ll j=l+l; i<=n; i++, j+=l)
            cout << j << " ";

        cout << endl;

    }

    return 0;

}


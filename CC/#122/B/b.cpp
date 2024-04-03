// Q : https://www.codechef.com/problems/ARYAGRID

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;

        ll a = n/l, b = m/l;
        ll a1=x%l==0 ? l:x%l, b2=m%l, a2=n%l, b1=y%l==0 ? l:y%l;

        if( a1<=a2 )
            a++;
        if( b1<=b2 )
            b++;

        cout << a*b << endl;
    }
    return 0;

}

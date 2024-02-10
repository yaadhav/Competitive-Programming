// Q : https://www.codechef.com/problems/ADVITIYA2

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        
        ll sum=a+b+c+d+e;
        if( sum>=4 )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;

}

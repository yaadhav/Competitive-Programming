// Q : https://www.codechef.com/problems/LITRATE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        
        ll rate=b/a;
        cout << rate;
        if( rate>=75 )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;

}

// Q : https://www.codechef.com/problems/PERMOR

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        for( int i=n; i>0; i--)
            cout << i << " ";
        cout << endl;
    }   

    return 0;
}
// Q : https://www.codechef.com/problems/MD_RIEV

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

        if( n>=5 )
            cout << 1 << " " << n-1 << endl;
        else
            cout << 0 << " " << n << endl; 
    }   

    return 0;
}
// Q : https://www.codechef.com/problems/ADVITIYA5

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        
        for( ll i=1; i<=k; i++)
            cout << i <<  " ";
            
        for( ll i=k+2; i<=n; i+=2)
            cout << i << " ";
        
        for( ll i=k+1; i<=n; i+=2)
            cout << i << " ";
        cout << endl;
    }   

    return 0;
}
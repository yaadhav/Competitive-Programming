// Q : https://www.codechef.com/problems/FIZZBUZZ2305

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

        if( n%2==0 || n==1 )
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;   
    }   

    return 0;
}
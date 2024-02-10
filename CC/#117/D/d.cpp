// Q : https://www.codechef.com/problems/EQUAL2

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b;
        cin >> a >> b;

        ll d=abs(a-b), sq=sqrt((8*d)+1)-1;
        ll n=(sq/2), check=(n*(n+1))/2;

        if( check!=d )
            n++;

        check=(n+1)/2;
        if( check%2==d%2 )
            cout << n << endl;
        else
            cout << (check*2)+1 << endl;    
    }   

    return 0;
}
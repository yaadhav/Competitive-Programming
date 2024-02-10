// Q : https://www.codechef.com/problems/ASM120

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll hcf( ll a, ll b)
{
   if(b==0)
        return a;
    else
        return hcf(b, a%b);
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;
        
        cout << hcf(max(x,y),min(x,y)) << endl;
    }   

    return 0;
}
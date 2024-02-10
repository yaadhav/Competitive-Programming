#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ll t;
    cin >> t;
 
    while(t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        if(a<b)
            swap(a,b);

        ll curr, ans=0;

        while( a<=n )
        {
            curr=a+b;
            b=a;
            a=curr;
            ans++;
        }
        
        cout << ans << endl;
    }   
 
    return 0;
}
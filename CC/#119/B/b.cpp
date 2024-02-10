#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll sum, ans=INT_MAX, inp, min=-1;
        for( ll i=0; i<n; i++)
        {
            cin >> inp;
            sum=inp%k; 
            
            if(sum<ans && inp>=k)
                ans=sum;
                
            if(inp>=k)
                min=inp;
        }

        if(min==-1)
            cout << min << endl;
        else
            cout << ans << endl;
    }   

    return 0;
}
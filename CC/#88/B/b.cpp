// Q : https://www.codechef.com/problems/COUNTSUB

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll> a;
        ll temp;
        
        for(ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        
        ll tot=(n*(n-1))/2;
        
        sort( a.begin(), a.end());
        
        ll count=1, ans=0;
        for( ll i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
                count++;
            else
            {
                if(count>1)
                {
                    ans+=(count*(count-1))/2;
                    count=1;
                }
            }
        }
        
        if(count>1)
        {
            ans+=(count*(count-1))/2;
            count=1;
        }
        
        cout << tot-ans << endl;
    }

    return 0;
}


// Q : https://www.codechef.com/problems/SEGTHREE

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll cal( vector<ll>& a, ll ans)
{
    for( ll i=2; i<a.size()-1; i++)
    {
        ll sum=a[i]+a[i-1]+a[i+1];
        if( sum%3!=0 )
        {
            ll add = sum%3==2 ? 1:2 ;
            a[i+1]+=add;
            ans+=add;
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        ll sum=a[0]+a[1]+a[2];
        ll ans=0, ans1, ans2, ans3;
        vector<ll>  a1=a, a2=a, a3=a;

        if( sum%3!=0 )
        {
            ll add = sum%3==2 ? 1:2 ;
            a1[0]+=add;
            a2[1]+=add;
            a3[2]+=add;
            ans+=add;
        }

        ans1=cal(a1,ans);
        ans2=cal(a2,ans);
        ans3=cal(a3,ans);

        if( ans1<=ans2 && ans1<=ans3)
            cout << ans1 << endl;        
        else if( ans2<=ans1 && ans2<=ans3)
            cout << ans2 << endl; 
        else if( ans3<=ans1 && ans3<=ans2)
            cout << ans3 << endl; 
    }

    return 0;
}
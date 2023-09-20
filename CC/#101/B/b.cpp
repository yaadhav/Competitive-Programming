// Q : https://www.codechef.com/problems/LPC

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        string s, k;
        cin >> n >> m >> s >> k;

        ll curr, sum, ans=m*9;
        for( int i=0; i<=n-m; i++)
        {
            sum=0;
            for( int j=i, x=0; x<m; j++, x++)
            {
                curr=abs(int(s[j])-int(k[x]));
                curr=10-curr<curr ? 10-curr:curr;
                sum+=curr;
            }
            if( sum<ans )
                ans=sum;
        }
        cout << ans << endl;
    }

    return 0;
}
// Q : https://www.codechef.com/problems/MAKE_IT_ONE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        vector<ll> a[26];

        for( ll i=0; i<s.length(); i++)
            a[int(s[i])-97].push_back(i);

        ll res=INT_MAX;
        for( auto c: a)
        {
            if( c.size()==0 ) continue;
            else if( c.size()==1 ) 
            {
                res=0;
                break;
            }
            else if( c.size()==2 )
            {
                ll one=1;
                if( c[1]-c[0]==1 ) {
                    res=0;
                    break;
                }
                else {
                    res=min(res, one);
                    continue;
                }
            }

            ll n=c.size()-1, l=0, r=0;
            for( r=0; r<=n; r++)
            {
                if( c[r]>n )
                {
                    r--;
                    break;
                }
            }
            r=min( r, n);

            ll last=c[n], ans=r-l+1;
            for( ll i=0, j=n; j<=last; i++, j++)
            {
                if( l==n );
                else if( c[l]<i )
                    l++;

                if( r==n );
                else if( c[r+1]<=j )
                    r++;

                ans=max(r-l+1, ans);
            }

            res = min( n+1-ans, res);
        }

        cout << res << endl;

    }

    return 0;

}


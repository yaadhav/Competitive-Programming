// Q : https://www.codechef.com/problems/GDST

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string s;
        cin >> n;// >> s;

        vector<ll> check(n);
        ll c=1;

        for( ll i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
                c++;
            else
            {
                check.push_back(c);
                c=1;
            }
        }
        check.push_back(c);

        ll z=0, ad=0, l=0, ch=1;
        vector<ll> ans;
        for( ll i=0; i<check.size(); i++)
        {
            l+=check[i];
        
            if( check[i]%2==1 )
            {
                if(z==0)
                {
                    if( ch%2==i%2 )
                        ad=1;
                    else
                        ad=0;

                    ans.push_back(l+ad);
                    ch=1-ch;
                }

                z=1-z;
            }
            else if(z==1)
            {
                ans.push_back(l+ad);
                ch=1-ch;
            }
        }

        cout << ans.size() << endl;
        for( auto i: ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;

}


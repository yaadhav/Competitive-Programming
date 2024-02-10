// Q : https://www.codechef.com/problems/ANTIPALINDR

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());

        ll count=1, ans=0, check=0;
        for( ll i=0; i<n-1; i++)
        {
            if( s[i]==s[i+1] )
                count++;
            else
            {
                check=1;
                if( count%2==1 )
                    ans++;
                count=1;
            }
        }

        if( count%2==1 )
            ans++;
        
        if( check==0 && n%2==1 )
            cout << 2 << endl;
        else if( check==0 && n%2==0 )
            cout << 1 << endl;
        else if( ans>n%2 )
            cout << 0 << endl;
        else
            cout << 1 << endl;
    } 
    
    return 0;
}


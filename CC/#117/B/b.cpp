// Q : https://www.codechef.com/problems/SHORTSPELL

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        string a=s;
        sort(s.begin(), s.end());

        string ans="";
        ll check=0;

        for( int i=0; i<n; i++)
        {
            if( s[n-1]==a[i] && check==0)
                check=1;
            else 
                ans+=a[i];
        }
    }   

    return 0;
}
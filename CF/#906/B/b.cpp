#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        int n, m;
        string s, c;
        cin >> n >> m >> s >> c;

        string ans="Yes", check="22";
        for( int i=0; i<n-1; i++)
        {
            if( s[i]==s[i+1] )
            {
                if( check[0]=='2' && s[i]=='0' )
                    check[0]='0';
                else if( check[1]=='2' && s[i]=='1' )
                    check[1]='1';

                ans="No";
            }
        }

        if( ans=="Yes" )
        {
            cout << ans << endl;
            continue;
        }
        else if( check=="01" )
        {
            cout << "No" << endl;
            continue;
        }

        ans="Yes";
        for( int i=0; i<m-1; i++)
        {
            if( c[i]==c[i+1] )
            {
                ans="No";
                break;
            }
        }

        if( ans=="No" || c[0]!=c[m-1] )
        {
            cout << ans << endl;
            continue;
        }

        check = check[0]=='0' ? "0":"1";

        if( check[0]!=c[0] )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
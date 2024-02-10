#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q;
    cin >> q;

    for( int cases=0; cases<q; cases++)
    {
        int n, temp;
        cin >> n;

        vector<ll> s;
        for( int i=0; i<n; i++ )  {

            cin >> temp;
            s.push_back(temp);
        }

        ll sum=0;
        for( int i=0; i<n; i++)  {

            if( s[i]<=2048 )
                sum+=s[i];
        }

        if( sum>=2048 )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;

        s.clear();
    }
 
    return 0;
}
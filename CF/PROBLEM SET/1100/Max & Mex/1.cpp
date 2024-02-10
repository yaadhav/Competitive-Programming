#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> s;
        int tp;
        for( int i=0; i<n; i++)
        {
            cin >> tp;
            s.push_back(tp);
        }
        
        sort( s.begin(), s.end());
        s.push_back(-1);

        int a=0, b=s[n-1], d=0;
        for( int i=0; i<n; i++)
        {
            if( a==s[i] && a!=s[i+1])
                a++;
            if( s[i]!=s[i+1] )
                d++;
        }

        if( a>b )
        {
            cout << d+k << endl;
            continue;
        }

        int add = (a+b)%2==0 ? (a+b)/2:(a+b+1)/2 ;

        bool check=0;
        for( auto i: s )
        {
            if( i==add )
                check=1;
        }

        if( !check && k>0 )
            d++;

        cout << d << endl;
    }

    return 0;
}

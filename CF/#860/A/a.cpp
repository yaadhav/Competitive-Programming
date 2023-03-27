// Q : https://codeforces.com/contest/1798/problem/A

#include <bits/stdc++.h>
using namespace std;

void Swap( int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n ;

        vector<int> a, b, am, bm;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        am=a;
        bm=b;

        sort( am.begin(), am.end());
        sort( bm.begin(), bm.end());

        int amax=am[n-1], bmax=bm[n-1];
        string ans="NO";

        if( a[n-1]==amax && b[n-1]==bmax )
        {
            cout << "YES" << endl;
            continue;
        }
        else if( (amax>a[n-1] && amax>b[n-1]) || (bmax>a[n-1] && bmax>b[n-1]) )
        {
            cout << "NO" << endl;
            continue;
        }

        //if( )

        for( int i=n-2; i>=0 && ans=="NO"; i++)
        {
            if( a[i]>a[n-1] )
                Swap( a[i], b[i]);
        }

        //cout << ans << endl;
    } 
    
    return 0;
}


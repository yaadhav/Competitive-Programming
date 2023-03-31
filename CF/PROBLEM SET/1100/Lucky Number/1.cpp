// Q : https://codeforces.com/contest/1808/problem/A

#include<bits/stdc++.h>
using namespace std;

int luckyNumber( int n )
{
    int max=0, min=9;

    while( n>0 )
    {
        if( n%10>max )
            max=n%10;
        if( n%10<min )
            min=n%10;
        n/=10;
    }

    return max-min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  t;
    cin >> t;

    while(t--)
    {
        int l, r, ans, max=0;
        cin >> l >> r;

        for( int n=l; n<=r; n++)
        {
            int luck=luckyNumber(n);
            if( luck>max )
            {
                ans=n;
                max=luck;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
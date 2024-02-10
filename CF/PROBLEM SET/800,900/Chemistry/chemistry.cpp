#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        sort( s.begin(), s.end());

        int count=1, rem=0;
        for( int i=1; i<n; i++)
        {
            if( s[i]==s[i-1] )
                count++;
            else
            {
                if( count%2==1 )
                    rem++;
                count=1;
            }
        }
        if( count%2==1 )
            rem++;

        if( (n-k)%2==1 )
            rem--;

        if( rem>k )
            cout << "NO" << endl;
        else
        {
            if( (k-rem)%2==0 )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
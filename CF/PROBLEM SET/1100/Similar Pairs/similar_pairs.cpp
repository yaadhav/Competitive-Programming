// Q : https://codeforces.com/problemset/problem/1360/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int odd=0;
        for( int &i: a)
        {
            cin >> i;
            if( i%2==0 )
                odd++;
        }

        if( odd%2==0 && (n-odd)%2==0 )
        {
            cout << "YES\n";
            continue;
        }

        sort( a.begin(), a.end());

        string ans="NO";
        for( int i=1; i<n; i++)
        {
            if( a[i]-a[i-1]<=1 && a[i]%2!=a[i-1]%2 )
                ans="YES";
        }

        cout << ans << endl;
    }

    return 0;
}
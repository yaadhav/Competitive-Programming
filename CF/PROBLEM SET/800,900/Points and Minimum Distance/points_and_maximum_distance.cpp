// Q : https://codeforces.com/contest/1895/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(2*n);
        for( int &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        int ans=a.back()-a[n]+a[n-1]-a[0];

        cout << ans << endl;
        for( int i=0, j=2*n-1; i<j; i++, j--)
            cout << a[i] << " " << a[j] << endl;
    }

    return 0;
}
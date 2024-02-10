// Q : https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, q;
    vector<int> x;
    int temp;

    cin >> n;
    for( int i=0; i<n; i++) {
        cin >> temp;
        x.push_back(temp);
    }

    sort( x.begin(), x.end());

    cin >> q;
    while(q--) {
        int m, start, ans;
        cin >> m;

        if( m<x[0] )
            ans=0;
        else if( m>x[n-1] )
            ans=n;
        else
            ans=upper_bound( x.begin(), x.end(), m)-x.begin();

        cout << ans << endl;     
    }
    
    return 0;
}
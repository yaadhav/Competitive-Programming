// Q : https://codeforces.com/problemset/problem/349/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> m;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        m.push_back(temp);
    }

    int sum=0;
    string ans="YES"; 
    for( int i=0; i<n; i++)
    {
        if( m[i]-25>sum )
            ans="NO";
        sum+=m[i];
    }

    cout << ans << endl;

    return 0;
}
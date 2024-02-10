// Q : https://codeforces.com/contest/746/problem/B

#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;

    string ans="";

    for( int i=n-2; i>=0; i-=2)
        ans+=s[i];
    for( int i=1-n%2; i<n; i+=2)
        ans+=s[i];

    cout << ans << endl;
    
    return 0;
}
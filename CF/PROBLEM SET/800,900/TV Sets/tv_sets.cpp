#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;

    vector<int> a(n);

    for( int &i : a)
        cin >> i ;
    
    sort( a.begin(), a.end());

    int ans=0;
    for( int i=0; i<m && a[i]<0; i++)
        ans+=a[i];

    cout << ans*-1 << endl;
    
    return 0;
}
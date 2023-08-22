// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> f;
    int temp;

    for( int i=0; i<m; i++)
    {
        cin >> temp;
        f.push_back(temp);
    }    

    sort( f.begin(), f.end());

    int min=f[n-1]-f[0];
    for( int i=1; i+n-1<m; i++)
    {
        if( f[n-1+i]-f[i]<min )
            min=f[n-1+i]-f[i];
    }

    cout << min << endl;
    
    return 0;
}
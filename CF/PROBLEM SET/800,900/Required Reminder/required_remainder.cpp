#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        int k=(n/x)*x;

        if( k+y<=n )
            cout << k+y << endl;
        else
            cout << k-x+y << endl;        
    }

    return 0;
}
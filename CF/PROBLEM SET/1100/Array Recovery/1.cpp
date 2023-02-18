#include <bits/stdc++.h>
using namespace std;

typedef double d;
 
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n; 
        cin >> n; 

        vector<int> a, d;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            d.push_back(temp);
        }

        int add, diff, check=1;

        a.push_back(d[0]);
        for( int i=1; i<n ; i++)
        {
            add=d[i]+a[i-1];
            diff=a[i-1]-d[i];

            a.push_back(add);

            if( diff>=0 && diff!=add )
                check=0;
        }

        if( !check )
        {
            cout << -1 << endl ;
            continue;
        }

        for( auto i: a)
            cout << i << " " ;
        cout << endl ;
    }
    
    return 0;
}

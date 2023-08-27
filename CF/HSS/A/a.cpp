#include<bits/stdc++.h>
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

        vector<int> a(n,0);
        a[n-1]=y;

        int ans=1;
        for( int i=n-2, j=1; i>=0 && ans; i--, j++)
        {
            a[i]=a[i+1]-j;

            if( a[i]<x )
                ans=0;
        }

        a[0]=x;

        if(ans)
        {
            for( int i : a)
                cout << i << " ";
            cout << endl;
        }
        else 
            cout << -1 << endl;
    }

    return 0;
}

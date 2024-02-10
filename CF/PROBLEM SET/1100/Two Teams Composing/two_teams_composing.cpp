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
        for( int &i: a)
            cin >> i;

        sort( a.begin(), a.end());

        int same=0, dist=0, count=1;
        for( int i=1; i<n; i++)
        {
            if( a[i]==a[i-1] )
                count++;
            else
            {
                dist++;
                if( count>same )
                    same=count;
                count=1;
            }
        }

        if( count>same )
            same=count;

        if( same>dist )
            cout << min(dist+1,same-1) << endl;
        else
            cout << same << endl;
    }
    return 0;
}
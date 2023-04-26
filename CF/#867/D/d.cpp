#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;

        if( n%2==1 && n!=1 )
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> a;

        for( int i=0; i<n; i++)
            a.push_back(0);

        for( int i=0; i<n; i++)
        {
            if(i==0)
                a[i]=n;
            else if(i%2==0)
                a[i]=i;
            else 
                a[i]=n-i;
        }

        for( auto i: a)
            cout << i << " ";
        cout << endl;
    } 
        
    return 0;
}
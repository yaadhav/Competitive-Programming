#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int n, temp;
        cin >> n;

        vector<int> a;

        a.push_back(0);
        for( int i=0; i<n; i++)
        {
            cin >> temp ;
            a.push_back(temp);
        }
        a.push_back(1440);

        int count=0;
        for( int i=0; i<=n && count<2; i++)
        {
            if( (a[i+1]-a[i])>=240)
                count=2;
            else if( (a[i+1]-a[i])>=120 )
                count++;
        }

        if( count==2 )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    } 
    
    return 0;
}

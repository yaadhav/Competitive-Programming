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
        vector<int> a;

        cin >> n;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        
        int sum=accumulate( a.begin(), a.end(), 0);

        bool check= a[0]==-1 ? 1:0 ;
        for( int i=1; i<n; i++)
        {
            if( a[i]==-1 )
                check=1;

            if( a[i]==a[i-1] && a[i]==-1 )
            {
                sum+=4;
                break;
            }
        }

        if( !check )
            sum+=-4;

        cout << sum << endl ;

        a.clear();
    }   
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for( int cases=0; cases<t; cases++)
    {
        int n;
        cin >> n;
        vector<int> ans;
        bool check=false;
        int count=0;
        
        for( int i=1; i<=n; i++)
        {
            if( n%i==0 )
            {
                ans.push_back(i);
                count++;
            }
        }

        if( count<3 )
        {
            cout << -1 << endl ;
            continue;
        }

        int product;
        for( int i=1; i<ans.size()-1; i++)
        {
            product=ans[i-1]*ans[i]*ans[i+1];
            if( product%n==0 && n%(ans[i]*ans[i+1])==0 )
            {
                cout << ans[i-1] << " " << ans[i] << " " << ans[i+1] << endl ;
                check=true;
                break ;
            }
        }

        if( check==false )
            cout << -1 << endl ;
    }

    return 0;
}

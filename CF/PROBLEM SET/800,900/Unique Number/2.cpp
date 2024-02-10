#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long int t, cases ; 
    long int n, i, x, check;
    vector<int> ans; 

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
		cin >> n ;

        if ( n>45 )
        {
            cout << -1 << endl;
            continue;
        }

        check=0 ;
        for( i=9; i>=1; i--)
        {
            check+=i ;
            
            if ( n<=check )
               break;      

            ans.push_back(i);      
        }

        ans.push_back(n+i-check) ;

        for ( i=ans.size()-1; i>=0; i--)
            cout << ans[i] ;

        cout << endl;
        
        ans.clear();
    }

    cin.tie(NULL);
    return 0;
}

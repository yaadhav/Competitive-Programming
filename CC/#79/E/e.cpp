// Q : https://www.codechef.com/START79D/problems/ONEORTWO

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        ll x, y;
        cin >> x >> y ;

        string ans;

        if( x==y && x%2==1 )
            ans="CHEF";
        else if( x==y && x%2==0 )
            ans="CHEFINA";

        if( ans.length()!=0 )
        {
            cout << ans << endl ;
            continue;
        }

        if( x-y>1 )
            ans="CHEF";
        else if ( y-x>1 )
            ans="CHEFINA";

        if( ans.length()!=0 )
        {
            cout << ans << endl ;
            continue;
        }

        ll max = x>y ? x:y ;

        if( max%2==0 )
            cout << "CHEF\n" ;
        else
            cout << "CHEFINA\n" ;
    } 
    
    return 0;
}


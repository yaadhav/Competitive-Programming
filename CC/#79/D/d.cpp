// Q : https://www.codechef.com/START79D/problems/PRIMEFACT

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

        vector<int> fact={ 2, 3, 5, 7};
        ll f;

        for( f=0; f<4; f++ )
        {
            if( x%fact[f]==0 )
                break;
        }
        f=x+fact[f];

        ll ans;
        ans=(y-f+1)/2;

        cout << ++ans << endl ;        
    } 
    
    return 0;
}


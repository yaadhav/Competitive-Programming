// Q : https://www.codechef.com/problems/STRAME

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
        string s; 
        cin >> n >> s;

        string ans="Ramos";

        if(n<2)
        {
            cout << ans << endl;
            continue;
        }

        int one=0;
        for( int i=0; i<n; i++)
        {
            if(s[i]=='1')
                one++;
        }

        int min = one<n-one ? one:n-one ;

        if( min%2==1 )
            ans="Zlatan";

        cout << ans << endl ;        
        
    } 
    
    return 0;
}


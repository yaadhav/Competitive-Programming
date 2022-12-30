#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int t, cases, i, n;
    vector <int> s, temp; int S ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n;

        for( i=0; i<n; i++)
        {
            cin >> S;
            s.push_back(S) ;
        }

        temp = s ;

        sort( temp.begin(), temp.end(), greater<>() );

        for( i=0; i<n; i++)
        {
            if( s[i]==temp[0] )
            {    cout << s[i]-temp[1] << " ";
                 continue;  }
                
            cout << s[i]-temp[0] << " " ;
        }

        cout << endl ;
        
        s.clear();
    }   
    cin.tie(NULL);
    return 0;
}

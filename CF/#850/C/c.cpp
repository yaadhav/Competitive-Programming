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
        int n;
        cin >> n;

        if( n%2==0 )
        {
            cout << "No" << endl ;
            continue;
        }
        
        cout << "Yes" << endl ;

        int i=1, j=n*2, mid=n-(n/2);

        while( mid-->0 )
        {
            cout << i << " " << j << endl;
            i++;
            j-=2;
        }

        j=(n*2)-1;
        mid=n/2;

        while( mid-->0 )
        {
            cout << i << " " << j << endl;
            i++;
            j-=2;
        }
    }   
    
    return 0;
}

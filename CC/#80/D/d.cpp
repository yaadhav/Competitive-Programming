// Q : https://www.codechef.com/problems/EQUALELE

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
        
        vector<int> a, b;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back( temp );
        }    

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back( temp );
        }   

        int ans=0;
        for( int i=0; i<n; i++)
        {
            if( a[i]<=b[i]*2 && b[i]<=a[i]*2 )
                ans++;
        }

        cout << ans << endl ;
    } 
    
    return 0;
}


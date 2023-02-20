#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while( t-- )
    {
        int n;
        cin >> n;

        vector<int> a, b;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        int count=0;
        for(int i=n-1, j=n-1; i>=0; i--)
        {
            if( a[i]==b[j] )
            {
                count++;
                j--;
            }
        }
        
        if( count!=n )
            cout << n-count << endl ;
        else
            cout << 0 << endl ;        
    }   
    
    return 0;
}

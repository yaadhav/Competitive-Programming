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

        int i, count=0;
        for( i=0; i<n; i++)
        {
            if( b[i]==a[0] )
                break;
            count++;            
        }
        i++;

        int check=1;
        for( int j=0; j<n && i<n; j++)
        {
            if(a[j]==b[i])
            {
                check++;
                i++;
            }
        }

        if( check==n-count )
            cout << count << endl ;
        else
            cout << n << endl ;        
    }   
    
    return 0;
}

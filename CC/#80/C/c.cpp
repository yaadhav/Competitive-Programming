// Q : https://www.codechef.com/problems/RUNCOMPARE

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
        
        vector<int> a;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back( temp );
        }

        sort( a.begin(), a.end() );

        int count=1, max=0;
        for( int i=0; i<n-1; i++)
        {
            if( a[i]==a[i+1] )
                count++;
            else
            {
                if( count>max )
                    max=count;
                count=1;
            }
        }
        if( count>max )
            max=count;

        cout << n-max << endl ;
    } 
    
    return 0;
}


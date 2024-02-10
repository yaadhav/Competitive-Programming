// Q : https://www.codechef.com/problems/MAKE_AB_SAME

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
        
        vector<int> a, b, pos;
        int temp, one=0;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back( temp );

            if( temp==1 )
                one++;
        }    

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back( temp );
        }   

        string ans="YES";
        if( a[0]!=b[0] || a[n-1]!=b[n-1] )
            ans="NO";

        for( int i=1; i<n-1 && ans=="YES"; i++)
        {
            if( a[i]>b[i] )
                ans="NO";
            else if( a[i]<b[i] && one==0 )
                ans="NO";          
        }

        cout << ans << endl ;
    } 
    
    return 0;
}


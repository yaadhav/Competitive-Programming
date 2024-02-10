// Q : https://www.codechef.com/problems/CHFADJSUM

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
            a.push_back(temp);
        }       

        b=a;

        sort( b.begin(), b.end(), greater<>() );

        int z = b[0]+b[1], count=0;

        for( int i=0; i<n && b[i]>=b[1]; i++)
        {
            if( b[i]==b[1] )
                count++;
        }

        if( b[0]!=b[1] && n-count>1 )
            cout << "YES" << endl;
        else if( b[0]==b[1] && n-count>=count-1 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } 
    
    return 0;
}


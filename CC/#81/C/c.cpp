// Q : https://www.codechef.com/START81D/problems/BOOKPAGES

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
        
        int temp, sum=0;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            sum+=temp;
        }

        if( sum%2==0 )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    } 
    
    return 0;
}


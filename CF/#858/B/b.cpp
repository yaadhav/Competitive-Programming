// Q : https://codeforces.com/contest/1806/problem/B

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

        sort( a.begin(), a.end() );

        int ans=0, count=1;

        for( int i=0; i<n-1; i++)
        {
            if( a[i]!=a[i+1] )
            {
                if( ans!=a[i] )
                    break;

                if( count<=n-count+1 )
                    break;
                else
                    ans++;

                n-=count;
                count=1;
            }
            else
                count++;
        }
        if( count>n-count+1 )
            ans++;

        cout << ans << endl ;     
    } 
    
    return 0;
}

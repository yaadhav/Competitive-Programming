// Q : https://codeforces.com/contest/1858/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m, d;
        cin >> n >> m >> d;

        vector<int> s={1};
        int temp, add=1;
        
        for( int i=0; i<m; i++)
        {   
            cin >> temp;
            if( temp!=1 )
                s.push_back(temp);
            else
                add=0;
        }
        
        s.push_back(n+1);

        int tot=m+add;
        for( int i=1; i<=m+1; i++)
        {
            if( s[i]-s[i-1]>d )
                tot+=(s[i]-s[i-1]-1)/d ;
        }

        int min=0;
        for( int i=1; i<=m; i++)
        {
            int c1=((s[i]-s[i-1]-1)/d) + ((s[i+1]-s[i]-1)/d);
            int c2=(s[i+1]-s[i-1]-1)/d ;
            
            if( c2>c1 )
                min++;
        }

        if( add==0 )
            min++;

        cout << tot-1 << " " << m-min << endl ;

    } 

    return 0;
}
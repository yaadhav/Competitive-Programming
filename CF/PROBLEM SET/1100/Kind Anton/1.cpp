// Q : https://codeforces.com/problemset/problem/1333/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;

        vector<int> a, b;
        int temp, neg=0, pos=0;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);

            if( temp==1 )
                pos++;
            else if( temp==-1 )
                neg++;
        }

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        string ans = a[0]==b[0] ? "YES":"NO" ;

        for( int i=n-1; i>=0 && ans=="YES"; i-- )
        {
            if( a[i]==1 )
                pos--;
            else if( a[i]==-1 )
                neg--;

            if( b[i]<a[i] && neg==0 )
                ans="NO"; 
            else if( b[i]>a[i] && pos==0 )
                ans="NO";   
        }

        cout << ans << endl;
    }
    
    return 0;
}
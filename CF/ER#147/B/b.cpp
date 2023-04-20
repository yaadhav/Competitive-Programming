// Q : https://codeforces.com/contest/1821/problem/B

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

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        int l=0, r=0;

        for( int i=0; i<n; i++)
        {
            if( a[i]!=b[i] && l==0 )
                l=i;
            if( a[i]==b[i] && l!=0 && r==0 )
            {
                r=i-1;
                break;
            }
        }

        if( l!=0 && r==0 )
            r=n-1;

        for( int i=l-1; i>=0; i--)
        {
            if(b[i]<=b[l])
                l=i;
            else
                break;
        }

        for( int i=r+1; i<n; i++)
        {
            if(b[i]>=b[r])
                r=i;
            else
                break;
        }
        

        cout << l+1 << " " << r+1 << endl;              
    } 
    
    return 0;
}


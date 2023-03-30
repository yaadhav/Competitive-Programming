// Q : https://codeforces.com/contest/1809/problem/C

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
        int n, k;
        cin >> n >> k;

        vector<int> a;

        for( int i=0; i<n; i++)
            a.push_back(-2);
        
        int c=n, sum=n;

        while( sum<k )
        {
            c--;
            sum+=c;
        }

        k-=sum-c;
        c=n+1-c;

        for( int i=0; i<c-1; i++, n--)
            a[i]=(n*2)-1;
        a[c-1]=(k*2)-1;
        
        for( auto i : a )
            cout << i << " ";
        cout << endl;
    } 
    
    return 0;
}


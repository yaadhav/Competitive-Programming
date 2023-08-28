// Q : https://codeforces.com/contest/1419/problem/A

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
        int n;
        string num;
        cin >> n >> num;

        int ans=0;

        for( int i=1; i<=n; i++)
        {
            int check=int(num[i-1])-48;
            if( n%2==1 && check%2==1 && (i%2)==1 )
                ans=1;
            else if( n%2==0 && check%2==0 && (i%2)==0 )
                ans=2;
            if( ans>0 )
                break;
        }

        if( ans==0 )
            ans=1+n%2;

        cout << ans << endl;
        
    }
    
    return 0;
}
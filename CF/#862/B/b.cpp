// Q : https://codeforces.com/contest/1805/problem/B

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
        string s;
        cin >> n >> s;

        char ch=s[0];
        int ind=0;

        for( int i=1; i<n; i++)
        {
            if( (int)s[i]<=(int)ch )
            {
                ch=s[i];
                ind=i;
            }
        }

        s.erase(ind,1);        
        cout << ch << s <<endl;        
    } 
    
    return 0;
}


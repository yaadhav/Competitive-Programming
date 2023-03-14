// Q : https://codeforces.com/problemset/problem/349/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> m;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        m.push_back(temp);
    }

    int t=0, f=0;
    string ans="YES"; 

    for( int i=0; i<n && ans=="YES"; i++)
    {
       if( m[i]==100 )
       {
            if( t>0 && f>0 )
            {
                t--;
                f--;
            }
            else if( t>2 )
                t-=3;
            else
                ans="NO";
       }
       else if( m[i]==50 )
       {
            f++;
            if( t>0 )
                t--;
            else
                ans="NO";
       }
       else 
            t++;
    }

    cout << ans << endl;

    return 0;
}
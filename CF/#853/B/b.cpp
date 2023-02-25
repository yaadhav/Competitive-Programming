#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if( n==1 )
        {
            cout << "Yes\n" ;
            continue;
        }

        vector<int> c;
        for( int i=0, j=n-1; i<j; i++,j-- )
        {
            if(s[i]!=s[j])
                c.push_back(0);
            else
                c.push_back(1);
        }

        int i, count=0;
        for( i=0; i<c.size()-1; i++)
        {
            if( c[i]==0 && c[i]!=c[i+1])
                count++;
        }
        if( c[i]==0 )
            count++;

        if( count>1 )
            cout << "No\n" ;
        else
            cout << "Yes\n" ;
    } 
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    string s;
    cin >> n >> k >> s;

    if( k==0 )
    {
        cout << s;
        exit(0);
    }

    if( n!=1 )
    {
        if( s[0]!='1' )
        {
            s[0]='1';
            k--;
        }
    }
    else
        s[0]='0';

    for( int i=1; i<n && k>0; i++)
    {
        if( s[i]!='0' )
        {
            s[i]='0';
            k--;
        }
    }

    cout << s;    

    return 0;
}

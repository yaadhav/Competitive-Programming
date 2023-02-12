#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s  ;
    int check=0;

    for( int i=0; i<n; i++)
    {
        if( s[i]=='"' )
            check++;

        if( s[i]==',' && check%2==0 )
            s[i]='.';
    }

    cout << s << endl;
    
    return 0;
}

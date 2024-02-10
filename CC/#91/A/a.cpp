// Q : https://www.codechef.com/START91C/problems/BLOBBYVOLLEY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int a=0, b=0;
        char server='A';
        for( int i=0; i<n; i++)
        {
            if( s[i]==server && s[i]=='A')
                a++;
            else if( s[i]==server && s[i]=='B')
                b++;
            else 
                server = s[i]=='A' ? 'A':'B';
        }

        cout << a << " " << b << endl;        
    }
    return 0;
}


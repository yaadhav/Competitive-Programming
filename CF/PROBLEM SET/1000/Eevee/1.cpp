#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    string s;
    vector<string> pok = {
        "espeon", "vaporeon", "jolteon", "flareon", 
        "umbreon", "leafeon", "glaceon", "sylveon",
        };

    cin >> n >> s ;

    for( int i=0; i<8; i++)
    {
        bool check=1;

        if( n!=7 ) {
            if( n==pok[i].length() ) {
                cout << pok[i] ;
                exit(0);
            }
            else
                check=0;
        }

        for( int j=0; j<s.length() && check; j++)
        {
            if( s[j]=='.' )
                continue;

            if( s[j]!=pok[i][j] )
                check=0;
        }
        if( check )  {
            cout << pok[i] ;
            break;
        }
    }

    return 0;
}
// Q : https://codeforces.com/problemset/problem/1373/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while( t-- )
    {
        string s;
        cin >> s;

        int zero=0;
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='0' )
                zero++;
        }           

        if( s.length()-zero < zero )
            zero = s.length()-zero;

        if( zero%2==1 )
            cout << "DA\n";
        else
            cout << "NET\n"; 
    }
    
    return 0;
}
#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int value, integer=0, prev;
        for( int i=0; i<s.length(); i++)
        {
            if( s[i]=='I' )
                value=1;
            else if( s[i]=='V' )
                value=5;
            else if( s[i]=='X' )
                value=10;
            else if( s[i]=='L' )
                value=50;
            else if( s[i]=='C' )
                value=100;
            else if( s[i]=='D' )
                value=500;
            else if( s[i]=='M' )
                value=1000;

            integer+=value;
            if( prev<value )
                integer-=2*prev;
            prev=value;
        }

        return integer;
    }
};

int main()
{
    string s;
    cin >> s;

    Solution a;

    int result=a.romanToInt(s);
    cout << result << endl;
    
    return 0;
}
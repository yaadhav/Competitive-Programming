// Q : https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {

    string result=s.substr(0,8);    

    if( s.substr(0,2)=="12" )
    {
        if( s[8]=='A' )
        result="00"+s.substr(2,6);
    }
    else if( s[8]=='P' )
    {
        int hrs=stoi(s.substr(0,2))+12;
        result=to_string(hrs)+s.substr(2,6);
    }

    return result;
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s); 
    cout << result ;

    return 0;
}

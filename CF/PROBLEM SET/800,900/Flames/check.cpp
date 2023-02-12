#include <bits/stdc++.h>
#include <string>
using namespace std;

string Delete( int pos, string str)
{
    int i;
    for( i=pos; i<str.length()-1; i++)
    {
        str[pos]=str[pos+1];
    }
    str[i]='\0';

    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);

    string Name1, Name2;

    cin >> Name1;

    Name1=Delete( 2,Name1);

    cout << Name1 ;

    return 0;
}